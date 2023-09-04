#include <stdio.h>
#include <stdlib.h>

void print_hello_world()
{
    printf("Hello World\n");
}

// Dangerous practice. Should use malloc instead because print_hello_world can overwrite the value of *z on the stack!
int *add(int *a, int *b) // Called function - returns pointer to integer
{
    // printf("address of add: %d\n", a);
    int *c = (int*)malloc(sizeof(int)); // Better practice!
    *c = *a + *b;
    return c;
}

int main()
{
    int x = 2, y = 4;
    // printf("address of main: %d\n", &x);
    int *z = add(&x,&y);
    print_hello_world();
    printf("Sum = %d\n", *z);

    return 0;
}