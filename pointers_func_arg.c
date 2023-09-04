#include <stdio.h>
/*
void Increment(int x)
{
    x = x + 1;
}

// What's happening here is this is "Call to value" so if a main function calls this nothing will happen to the value passed into the function (local var).
*/

// Instead, pass the address. Advantages of this are that it saves a lot of memory because it doesn't create copies, but reference to it. 
void increment(int *p)
{
    *p = *p + 1;
}

int main()
{
    int x = 5;
    increment(&x);
    printf("x is %d\n", x);
    return 0;
}