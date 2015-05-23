// decltype.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//generic template for concatinating objects
template <typename lhsT, typename rhsT>
auto tf(lhsT & lhs, rhsT & rhs) -> decltype(lhs + rhs){ //decltype chooses string type over const char * type
    return lhs + rhs;
}

int main( int argc, char ** argv ) {
    int i = 47;
    const char * cstr = "this is a c-string";
    string strobj("this is a string class string");
    
    auto x = string("this is a string class string");
    decltype(x) y; //decltype keyword provides a type declaration based on the type of an expression
                    //so y is now the same type as x
    
    cout << "type of i is " << typeid(i).name() << endl;
    cout << "type of cstr is " << typeid(cstr).name() << endl;
    cout << "type of strobj is " << typeid(strobj).name() << endl;
    cout << "type of x is " << typeid(x).name() << endl;
    cout << "type of y is " << typeid(y).name() << endl;
    
    //using the template
    auto z = tf(cstr, strobj);
    cout << "z is " << z << endl;
    cout << "type of z is " << typeid(z).name() << endl; //returned a string type, not a const char *
    
    return 0;
}
