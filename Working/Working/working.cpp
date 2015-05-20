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

    
    
    
    //Arrays and Strings -- IDK how to create a seperate file or subroutine to call yet from the main
    int ia[5];
    ia[0] = 1;
    *ia = 1; //same as ia[0] = 1
    int *ip1 = ia;//This defines an integer pointer and assigns the address of the array to the pointer.
                //Notice that you don't need the address of operator to get an arrays address.
    *ip1 = 2; //assigns 2 to the first element of the array
    ++ip1; //now pointing to the 2nd element of ia
    *ip = 3; //ia[1] = 3
    *(++ip) = 4; //ia[2] = 4 -- pointer incremented with ++, and value assigned at the same time
    
    
    char s[] = {'s', 't', 'r', 'i', 'n', 'g', 0}; //same as s[] = "string"
    printf("String is %s\n", s);
    
    for(int i = 0; s[i]; ++i){
        printf("char is %c\n", s[i]);
    }
    
    for(char * cp = s; *cp; ++cp){ //using pointers
        printf("char is %c\n", *cp);
    }
    
    for(char c : s){ //a sensible range loop
        if(c == 0) break; //range function goes all the way to the end of the array, but last element of array is 0
        printf("char is %c\n", c);
    }
    
    return 0;
}

