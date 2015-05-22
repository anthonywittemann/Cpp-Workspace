#include <cstdio>
using namespace std;

// The function-operator is a handy way to create an object that works like a function,
// yet has the ability to keep state and other information between function calls
class MultBy {  //class that operates like a function
    int mult = 1;
    MultBy();
public:
    MultBy ( int n ) : mult(n) {}
    int operator () ( int n ) const { return mult * n; }
};

int main( int argc, char ** argv ) {
    const MultBy times4(4);
    const MultBy times10(10);
    const MultBy times15(15);
    printf("times4(5) is %d\n", times4(5));
    printf("times4(15) is %d\n", times4(15));
    printf("times10(5) is %d\n", times10(5));
    printf("times10(15) is %d\n", times10(15));
    printf("times15(5) is %d\n", times15(5));
    printf("times15(15) is %d\n", times15(15));
    return 0;
}
