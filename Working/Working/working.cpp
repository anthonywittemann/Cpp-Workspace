// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

//structs and classes are identical except for the fact that
//members default to public in structs
//good to use when class or struct will only have data members, no methods
struct A{
    int ia;
    int ib;
    int ic;
};

//declaration of the class
class B {
    int b;
public:
    void setValue( const int b1 );//const safe parameters
    int getValue();
    int getValue() const;//const safe accessor
};

//definition of the class
int B::getValue(){
    puts("Mutable getter");
    return b;
}

int B::getValue() const{
    puts("Immutable getter");
    return b;
}

void B::setValue( const int b1 ) {
    b = b1;
}







int main( int argc, char ** argv )
{
    //accessing data members using structs -- public access
    A a = {1, 2, 3};
    printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);
    
    //accessing data members using pointers to structs
    A *pa = &a;
    printf("ia is %d, ib is %d, ic is %d\n", pa->ia, pa->ib, pa->ic); //-> is pointer selector operator
    
    
    //making functions const safe, use of the class
    B b;
    const B bubble = b;
    b.setValue(42);
    printf("The value is: %d", b.getValue());
    printf("The value is: %d", bubble.getValue());
    
    return 0;
}
