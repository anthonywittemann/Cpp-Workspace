#include <cstdio>
#include <iostream>
using namespace std;

class Rational {
    int _n = 0;
    int _d = 1;
public:
    Rational ( int numerator = 0, int denominator = 1 ) : _n(numerator), _d(denominator) {};
    Rational ( const Rational & rhs ) : _n(rhs._n), _d(rhs._d) {};	// copy constructor
    ~Rational ();
    inline int numerator() const { return _n; };
    inline int denominator() const { return _d; };
    Rational & operator = ( const Rational & );
    Rational operator + ( const Rational & ) const; // $$ comment this out
    Rational operator - ( const Rational & ) const;
    Rational operator * ( const Rational & ) const;
    Rational operator / ( const Rational & ) const;
};

//operator overloads to do arithmetic and assignments on rational #s

Rational & Rational::operator = ( const Rational & rhs ) {
    if( this != &rhs ) {
        _n = rhs.numerator();
        _d = rhs.denominator();
    }
    return *this;
}

Rational Rational::operator + ( const Rational & rhs ) const {  //$$ comment this out
    return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator - ( const Rational & rhs ) const {
    return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * ( const Rational & rhs ) const {
    return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / ( const Rational & rhs ) const {
    return Rational(_n * rhs._d, _d * rhs._n);
}

Rational::~Rational() {     //destructor
    printf("dtor %d/%d\n", _n, _d);
    _n = 0; _d = 1;
}


// $$ - replaced from above + overload
//Rational  + ( const Rational & lhs, const Rational & rhs ) {
//    return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
//}

// << operator overload - useful for std::cout
std::ostream & operator << (std::ostream & o, const Rational & r) {
    return o << r.numerator() << '/' << r.denominator();
}

int main( int argc, char ** argv ) {
    
    Rational a = 7;		// 7/1
    cout << "a is: " << a << endl;
    Rational b(5, 3);	// 5/3
    cout << "b is: " << b << endl;
    Rational c = b;		// copy constructor
    cout << "c is: " << c << endl;
    Rational d;			// default constructor
    cout << "d is: " << d << endl;
    d = c;				// assignment operator
    cout << "d is: " << d << endl;
    Rational & e = d;	// reference
    d = e;				// assignment to self!
    cout << "e is: " << e << endl;
    
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    //cout << 14 << " + " << a << " = " << 14 + a << endl; //doesn't work b/c literal 14 doesn't have overloaded + operator
    cout << a << " + " << 14 << " = " << a + 14 << endl; //works b/c constructor will do implicit conversion when only provided with one parameter and assign denominator to 1
    
    //way to make 14 + a work -- see commented sections with code $$
    
    d = c = b = a; //assignment operator is expected to be chained in C++
    printf("a: %d/%d\n", a.numerator(), a.denominator());
    printf("b: %d/%d\n", b.numerator(), b.denominator());
    printf("c: %d/%d\n", c.numerator(), c.denominator());
    printf("d: %d/%d\n", d.numerator(), d.denominator());
    
    return 0;
}
