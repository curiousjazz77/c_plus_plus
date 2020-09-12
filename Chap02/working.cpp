// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int x;
    x = 42;
    printf("x is %d\n", x);
    x = 42 * (12 + 14);
    printf("x is %d\n", x);
    puts("Hello, World!");


    const int i = 7;
    printf("i is %d\n", i); 
    // POINTERS
    int y = x; // same value but different memory location
    int *ip; //strongly typespointer
    ip = &x; // returns address of x to ip. ip now points to x
    y = *ip; //asterisk is the pointerdereference operator. 

    int a = 73;
    int b = 42;
    int *ap = &a;
    printf("a is %d\n", a);
    printf("b is %d\n", b);
    printf("*ap is first %d\n", *ap); //points to address of a
    // can't redefine it

    int *bp = &b; // points to address of b
    printf("*bp is %d\n", *bp); //points to address of b

    // REFERENCES
    int c = 7;
    int *cp = &c;
    int &d = c; // d in this case is a reference

    c = 5; // reference will change

    int z = 73;
    cp = &z;
    printf("*cp is %d\n", *cp); //now points to z
    printf("c is %d\n", c);
    printf("d is %d\n", d); //still equal to c
    printf("z is %d\n", z);

    
    return 0;
}
