// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

#define ONE 1 //not a variable -- cannot get it's address, add a pointer to it
                // it replaces ONE with the literal value of 1

int main( int argc, char ** argv )
{
    //puts("Hello, World!");
    printf("ONE: %d\n", ONE);
    return 0;
}
