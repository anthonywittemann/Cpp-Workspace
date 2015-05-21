// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;


struct A{
    int ia;
    int ib;
    int ic;
};

int main( int argc, char ** argv )
{
    //accessing data members using structs -- public access?
    A a = {1, 2, 3};
    printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);
    
    //accessing data members using pointers to structs
    A *pa = &a;
    printf("ia is %d, ib is %d, ic is %d\n", pa->ia, pa->ib, pa->ic); //-> is pointer selector operator
    
    return 0;
}
