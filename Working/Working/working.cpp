// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include "preproc.h"
using namespace std;

//#define ONE 1 //not a variable -- cannot get it's address, add a pointer to it
                // it replaces ONE with the literal value of 1

int main( int argc, char ** argv )
{
    //puts("Hello, World!");
    printf("ONE: %d\n", ONE);
    printf("preprocessor macro: %s\n", _sOne); //_sOne is defined in preproc.h
    return 0;
}
