// file-io.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

const int maxString = 1024;	// read buffer size

int main( int argc, char ** argv ) {
    const char * fn = "test.file";			// file name
    const char * str = "This is a literal C-string.\n";
    
    // create/write the file
    printf("writing file\n");
    FILE * fw = fopen(fn, "w");
    for(int i = 0; i < 5; i++) {
        fputs(str, fw);
    }
    
    fclose(fw);
    printf("done.\n");
    
    // read the file
    printf("reading file\n");
    char buf[maxString];
    FILE * fr = fopen(fn, "r");
    while(fgets(buf, maxString, fr)) {
        fputs(buf, stdout);
    }
    
    // can also append to the end of the file "a"
    
    fclose(fr);
    remove(fn); //deletes file from file system
    
    //create, rename and delete a file
    const static char * fileName = "file";
    const static char * newFileName = "file2";
    FILE * fh = fopen(fileName, "w");
    fclose(fh);
    rename(fileName, newFileName);
    remove(newFileName);
    
    //unformatted character i/o
    const static int BUFFER_SIZE = 256;
    char buffer[BUFFER_SIZE];
    fputs("Prompt: ", stdout);
    fflush(stdout); //FLUSH THE BUFFER!!!!
    fgets(buffer, BUFFER_SIZE, stdin); //type into the console
    fputs(buffer, stdout); //print out whatever I typed into the console
    
    printf("done.\n");
    
    return 0;
}
