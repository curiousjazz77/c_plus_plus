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


    // primitive array
    int ia[5];
    ia[0] = 1;
    *ia = 1;
    int *ep = ia; //integer pointer

    *ep = 2;
    ++ep;
    *ep = 3; //assigned to second element
    *(++ep) = 4; //shortcut to the previous 2 commands

    int ib[5] = { 1, 2, 3, 4, 5};

    //primitive string is a special case of array 
    char s[] = "String";
    printf("String s is: %s\n", s);

    char t[] = {'S', 't', 'r', 'i', 'n', 'g', 0}; //without the 0, it prints twice
    printf("String t is: %s\n", t);

    for (int i = 0; t[i] != 0; ++i){
        printf("char is %c\n", t[i]);
    }

    for (char * cp = t; *cp != 0; ++cp){
        printf("char is %c\n", *cp);
    }

    for(char c : t){
        if (c==0) break;
        printf("char is %c\n", c);
    }

    int f = 42;
    int g = 712;

    if (g > f) {
        puts("True g is more than f");
    } else if (g > 120){
        puts("g is more than 120");
    } else {
        puts("Condition is false");
    }

    if (1){
        puts("condition is True");
    } else {
        puts("Condition is False");
    }

    printf("The greater value is %d\n", g > f ? g : f);
    return 0;
}
