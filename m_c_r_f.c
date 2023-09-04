#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);

    int *A = (int*)malloc(n*sizeof(int)); //dynamically allocated array
    // int *A = (int*)calloc(n, sizeof(int)); //every value gets init to 0
    for (int i = 0; i < n; i++)
    {
        A[i] = i + 1;
    }
    // free(A);
    // A = NULL; // After free, adjust pointer to NULL.

    int *B = (int*)realloc(A, 2*n*sizeof(int));

    for (int i = 0; i < n; i ++)
    {
        printf("%d ", A[i]);
    }


    /*
    Other ways of doing things.
    int *A = (int*)realloc(A, 0); // This is the same as free(A).
    int *B = (int*)realloc(NULL, n*sizeof(int)); // Equivalent to malloc.
    */

    return 0;
}