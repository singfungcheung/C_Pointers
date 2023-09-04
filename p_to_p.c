#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;

    printf("%d\n", *p); // value of x (6)
    printf("%d\n", *q); // value of p (which stores the address of x)
    printf("%d\n", *(*q)); // value of x
    printf("%d\n", *(*r)); // value of p (which stores the address of x)
    printf("%d\n",*(*(*r))); // Value of x
    ***r = 10;
    printf("x = %d\n", x);
    **q = *p + 1;
    printf("x = %d\n", x);
    return 0;
}