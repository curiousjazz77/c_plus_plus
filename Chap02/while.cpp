// while.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int i = 0;
    
    while(i < 5) {
        //if (i == 2) break;
        if (i ==2) {
            ++ i; // skips over 3
            continue;
        }
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }
    
    return 0;
}
