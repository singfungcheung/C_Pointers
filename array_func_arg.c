#include <stdio.h>

int sum_of_elements(int A[], int size) // If we just pass in int A[], C automatically makes a reference to int *A, which is the first element of the array.
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(A+i); // A[i] = *(A + i)
    }

    return sum;
}

int main()
{
    int A[] = {1,2,3,4,5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sum_of_elements(A, size);
    printf("Sum of all elements: %d\n", total);

    return 0;
}