#include <cstdio>
#include <cstdint> //for standardizing integer lengths on different OSs
#include <string>
#include <typeinfo>
#include <vector>
using namespace std;

//defining types with typedef
typedef unsigned char points_t;
typedef unsigned char rank_t;

struct score{
    points_t p;
    rank_t r;
};

string func() {
    return string("this is a string");
}

//bitwise shifting business
const char * u8_to_bin ( unsigned char x ){
    static char s[sizeof(char) + 1];
    for ( char & c : s ) c = 0; // zero out string
    char * sp = s;
    for (unsigned char z = 128; z > 0; z >>= 1) {
        *(sp++) = ((x & z) == z) ? '1' : '0';
    }
    return s;
}

int main( int argc, char ** argv )
{
    //_____________________integer types_______________________
    
    //char - 8 bits
    printf("The size of a char is %ld bytes \n", sizeof(char));
    //short int - 16 bits, signed or unsigned
    printf("The size of a short int is %ld bytes \n", sizeof(short int));
    //int - 32 bits, signed or unsigned
    printf("The size of an int is %ld bytes \n", sizeof(int));
    //long int - 32 or 64 bits, signed or unsigned
    printf("The size of a long int is %ld bytes \n", sizeof(long int));
    //long long int - 64 bits, signed or unsigned
    printf("The size of a long long int is %ld bytes \n", sizeof(long long int));
    
    
    printf("The size of an int_8 is %ld bytes \n", sizeof(int8_t));
    printf("The size of an int_16 is %ld bytes \n", sizeof(int16_t));
    printf("The size of an int_32 int is %ld bytes \n", sizeof(int32_t));
    printf("The size of an int_64 is %ld bytes \n", sizeof(int64_t));
    
    //different ints
    long int x = 42LL;//long long int
    x = 0xff93;//hexadecimal
    x = 0223; //octal
    x = 42U; //unsigned
    x = 0b1001001; //binary
    
    
    //_______________________floating point________________________
    float f = 10.01; //f = 1.001e1
    double df = 1231.128312; //df = 1.231128312e3
    long double ldf = 9.1241212391231e5; //ldf = 912412.12391231
    
    printf("f: %1.10f\n", f); //fp rounding error?
    
    printf("size of float in bytes is %ld\n", sizeof(f));
    printf("size of double float in bytes is %ld\n", sizeof(df));
    printf("size of long double float in bytes is %ld\n", sizeof(ldf));
    
    //_______________________chars and strings______________________
    char cString[] = "String" " is " "Bling"; //3 concatinated string
    printf("size of cString[] is %ld\n", sizeof(cString)); //size of 16 even tho 15 chars - b/c of null terminator
    
    //_______________________ char escape sequences_________________
    puts("This is a str \\ \' \" \x40 \u03bc"); //prints out This is a str \ ' " @ μ
    
    //_______________________ qualifiers ___________________________
    //CV Qualifiers                     Storage Duration
    //const                             static
    //volatile                          register
    //mutable                           extern
    
    //defining types with typedef - used for architecture independent types
    //used in cstdint library for uint16_t, int8_t etc.
    score s = { 5, 1 };
    printf("Score s has %d points and is ranked %d\n", s.p, s.r);
    
    //auto type - like python variables
    auto xa = func(); //compiler automatically decides what type x is
    printf("x is %s\n", xa.c_str());
    printf("type of x is %s\n", typeid(x).name());
    
    vector<int32_t> vi = { 3, 5, 7 };
    //cumbersome AF
    for(vector<int32_t>::iterator it = vi.begin(); it != vi.end(); ++it){
        printf("ith vi is %d\n", *it);
    }
    //using auto - ok, improvement
    for(auto it = vi.begin(); it != vi.end(); ++it){
        printf("ith vi is %d\n", *it);
    }
    //using auto and range - yeah buddy!!
    for(auto i : vi){
        printf("ith vi is %d\n", i);
    }
    
    //bitwise operators
    unsigned char ch = 5;
    unsigned char ch1 = 10;
    printf("x is %s\n", u8_to_bin(ch));
    printf("y is %s\n", u8_to_bin(ch1));
    printf("bitwise or result is %s\n", u8_to_bin(ch | ch1));
    printf("bitwise and result is %s\n", u8_to_bin(ch & ch1));
    printf("bitwise not result is %s\n", u8_to_bin(~ch));
    printf("bitwise or result is %s\n", u8_to_bin(ch >> 1));
    
    return 0;
}
