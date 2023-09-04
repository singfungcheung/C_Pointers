#include <stdio.h>

int main()
{
    int B[2][3];
    B[0][0] = 2;
    B[0][1] = 3;
    B[0][2] = 6;

    B[1][0] = 4;
    B[1][1] = 5;
    B[1][2] = 8;

    // B[0] and B[1] are 1-D arrays of 3 integers.
    int (*p)[3] = B;
    printf("%d or %d\n", B, &B[0]); // X1
    printf("%d or %d or %d\n", *B, B[0], &B[0][0]); // X1
    printf("%d or %d\n", B+1, &B[1]); // Y1
    printf("%d or %d or %d\n", *(B+1), B[1], &B[1][0]); // Y1

    // These three are the same.
    // B[i][j] == *(*(B + i) + j) == *(B[i] + j)

    return 0;
}