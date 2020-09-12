// for.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{

    // char string[] = "abcdefg";
    // for( int i = 0; string[i]; ++i ) {
    //     printf("i is %c\n", string[i]);
    // } 

    char string[] = "abcdefg";
    for( char * cp = string; *cp; ++cp ) {
        printf("*cp is %c\n", *cp);
    } 
    // basic for loop
    for( int i = 0; i < 5; ++i ) {
        printf("i is %d\n", i);
    }
    int array[] = {1, 2, 3, 4, 5};
    for (int i: array){
       printf("i is %d\n", i); 
    }
    return 0;
}
