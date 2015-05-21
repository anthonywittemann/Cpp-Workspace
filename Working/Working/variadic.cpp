// variadic.c by Bill Weinman <http://bw.org/>
// updated for C++EssT 2014-10-24
#include <cstdio>
#include <cstdarg>  //needed for variadic arguements

// first argument is int count of remaining args
// ... remaining args are doubles for average
double average(const int count, ...)
{
    va_list ap; //list of arguements that come in from ...
    int i;
    double total = 0.0;
    
    va_start(ap, count); //takes in the list of arguements and its length
    for(i = 0; i < count; ++i) {
        total += va_arg(ap, double); //access the list
    }
    va_end(ap);
    return total / count;
}

// works like printf, format plus args
int message(const char * fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    int rc = vfprintf(stdout, fmt, ap); //printing from the variable list
    puts("");
    va_end(ap);
    return rc;
}

int main( int argc, char ** argv ) {
    message("This is a message");
    message("Average: %lf", average(5, 25.0, 35.7, 50.1, 127.6, 75.0));
    return 0;
}

