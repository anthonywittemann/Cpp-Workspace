// cpp11.cpp by Bill Weinman <http://bw.org/>
// test for modern C++ compiler
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    
    //pointer example
    int x = 7;
    int y = x;
    int *ip = &x; //integer pointer = the address of the variable x
    y = *ip; //pointer dereference operator
    
    printf("The value of x is %d:\n", x);
    printf("The value of y is %d:\n", y);
    printf("The value of *ip is %d:\n", *ip);
    
    
    x= 73;
    printf("The value of x is %d:\n", x);
    printf("The value of y is %d:\n", y);
    printf("The value of *ip is %d:\n", *ip);
    
    ip = &y; //points to the address of y
    printf("The value of x is %d:\n", x);
    printf("The value of y is %d:\n", y);
    printf("The value of *ip is %d:\n", *ip); 
    
    int ia[] = { 1, 2, 3, 4, 5 };
    for( auto i : ia ) {
        printf("i is %d\n", i);
    }
    return 0;
}
