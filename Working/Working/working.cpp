#include <cstdio>
#include <cstdint> //for standardizing integer lengths on different OSs
using namespace std;

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
    
    return 0;
}
