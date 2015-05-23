// template-function.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>
using namespace std;

template <typename T> T maxof ( T a, T b ) {
    return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
    printf("max is: %d\n", maxof<int>( 7, 9 ));
    
    printf("max is: %s\n", maxof<const char *>( "this", "that" )); //comparing the addresses, not the chars of strings
    printf("max is: %s\n", maxof<string>( "this", "that" ).c_str()); //comparing the chars of strings - this > that
    
    return 0;
}
