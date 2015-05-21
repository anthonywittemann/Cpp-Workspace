// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include "preproc.h"
using namespace std;

//#define ONE 1 //not a variable -- cannot get it's address, add a pointer to it
                // it replaces ONE with the literal value of 1

//defining more powerful macros
#define MACRO(a, b) (a * b)
#define MAX(a, b) (a > b ? a : b)

int main( int argc, char ** argv )
{
    //puts("Hello, World!");
    printf("ONE: %d\n", ONE);
    printf("preprocessor macro: %s\n", _sOne); //_sOne is defined in preproc.h
    
    int ia = 5;
    int ib = 6;
    printf("Macro product: %d\n", MACRO(ia, ib)); //MACRO(ia, ib) is equivalent to (ia * ib)
    printf("Max: %d\n", MAX(ia, ib));
    return 0;
}
