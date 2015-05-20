// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main( int argc, char ** argv )
{
    
    //refernece example
    //cannot define a reference without also intializing it
    
    int x = 7;
    int *ip = &x; //integer pointer = the address of the variable x
    int &y = x; //y is a reference with the address of x
    
    printf("The value of x is %d:\n", x);
    printf("The value of *ip is %d:\n", *ip);
    printf("The value of y is %d:\n", y); //doesn't need to be dereferenced like a pointer with the * in front
    
    
    x = 42;
    printf("The value of x is %d:\n", x);
    printf("The value of *ip is %d:\n", *ip); //changes b/c x is changed
    printf("The value of y is %d:\n", y); //changes b/c x is changed
    
    
    y = 73;
    printf("The value of x is %d:\n", x); //changes b/c y (a reference) is changed
    printf("The value of *ip is %d:\n", *ip); //changes b/c y (a reference to x) is changed
    printf("The value of y is %d:\n", y); //y is always the same as x b/c it is a reference
    
    int z = 149;
    ip = &z;
    printf("The value of x is %d:\n", x);
    printf("The value of *ip is %d:\n", *ip); //changes to z
    printf("The value of y is %d:\n", y); //changes b/c x is changed
    printf("The value of z is: %d\n", z);
    
    y = z; //now all values 149 b/c if you change y, you change x
    printf("The value of x is %d:\n", x); //changes b/c y is still referenced to x
    printf("The value of *ip is %d:\n", *ip); 
    printf("The value of y is %d:\n", y); //changes b/c now takes in value of z
    printf("The value of z is: %d\n", z);


    
    return 0;
}
