// hello.cpp by Bill Weinman <http://bw.org/>
/*
This is a multiline comment
ooooo
*/

#include <cstdio>
using namespace std;

// in modern c++, argv and argc not really used
// int argc, char ** argv[]
int main() //function; entry point function
{
    const char * str = "Heyyyyy";
    puts(str);
    printf("Hello, World!"); //statement
    cout << "Hello World" << endl;
    return 0;
}
