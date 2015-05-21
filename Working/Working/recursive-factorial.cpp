// recursive-factorial.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

unsigned long int factorial( unsigned long int n ) {
    if( n < 2 ) return 1;
    return factorial( n - 1 ) * n;
}

unsigned long int iterativeFactorial( unsigned long int n ){
    unsigned long int result = 1;
    for (unsigned long int i = n; i > 1; i--) {
        result *= i;
    }
    
    return result;
}

int main( int argc, char ** argv ) {
    unsigned long int n = 20;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    
    printf("Iterative Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}
