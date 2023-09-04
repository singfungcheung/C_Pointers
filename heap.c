#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a; // goes on stack
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    free(p);
    p = (int*)malloc(sizeof(int));
    *p = 20;
    free(p);

    /*
    Allocate block of memory:
    malloc = void* malloc(size_t size) //unsigned int
    int *p = (int*)malloc(3*sizeof(int)) <- type casting

    calloc = void* calloc(size_t num, size_t size)
    int *p = (int*)calloc(3, sizeof(int)) <- auto sets all values to 0

    realloc = void* realloc(void* ptr, size_t size of new block)

    Deallocate block of memory:
    free
    */

    return 0;
}