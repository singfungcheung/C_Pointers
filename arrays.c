#include <stdio.h>

int main()
{
    // Array
    int A[5] = {2, 4, 5, 8, 1};
    // printf("First address of A: %d\n", A);
    // printf("First address of A: %d\n", &A[0]);
    // printf("%d\n", A[0]);
    // printf("%d\n",*(A));

    for (int i = 0; i < sizeof(A)/sizeof(int); i++)
    {
        printf("First way of getting address: %d\n", &A[i]);
        printf("Second way of getting address: %d\n", A + i);
        printf("First way of getting value: %d\n", A[i]);
        printf("Second way of getting address: %d\n", *(A + i));
    }
    return 0;
}