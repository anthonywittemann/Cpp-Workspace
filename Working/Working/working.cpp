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
    return 0;
}
