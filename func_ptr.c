#include <stdio.h>

void print_hello(char *name)
{
    printf("Hello %s\n", name);
}

int add(int a, int b)
{
    return a+b;
}

int main()
{
    /*
    Pointer to function that should take (int, int) as argument/parameter and return int
    */
    int (*p)(int, int);
    p = &add;
    printf("%d\n",(*p)(1,2));

    void (*ptr)(char*);
    ptr = &print_hello;
    (*ptr)("Sing Fung");

    // Another way (apparently it is more popular according to the tutorial)
    void (*ptr2)(char*);
    ptr2 = print_hello; // This will also return the pointer or address of the function.
    ptr2("Y");
    return 0;
}