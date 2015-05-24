// exception.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <exception>
using namespace std;

class E : public exception{
    const char * msg;
    E(){}
public:
    E (const char * s) throw() : msg(s){}
    const char * what() const throw() {return msg;}
};

// different types of error messages that can be used by functions and classes in larger programs
const E e_bad("Bad code");
const E e_oops("silly mistake");
const E e_fuck("we're screwed");

void broken() {
    cout << "this is a broken function" << endl;
    throw E("Ooops, dis function broke");
}

void death(){
    cout << "you have entered into an eternal vortex from which you shall never return" << endl;
    throw e_fuck;
}

int main( int argc, char ** argv ) {
    cout << "let's have an emergency!" << endl;
    try{
        broken();
    } catch (E & e){
        cout << e.what() << endl;
    }
    
    return 0;
}
