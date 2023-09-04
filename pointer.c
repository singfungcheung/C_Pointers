#include <stdio.h>

int main()
{
    int a; // int
    int *p; // pointer var

    p = &a; // points to address of a
    a = 5; 

    *p = 8; // deferences p and updates value of a
    printf("%d", p);
    return 0;
}