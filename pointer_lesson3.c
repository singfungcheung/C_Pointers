#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;
    printf("size of integer is %d\n", sizeof(int));
    printf("Address = %d, value = %d\n",p, *p);

    char *p0 = (char*)p;
    printf("size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, value = %d\n", p0, *p0);

    // Void pointer - generic pointer
    void *p1;
    p1 = p;
    printf("Address = %d", p1);

    return 0;
}