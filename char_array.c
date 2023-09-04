#include <stdio.h>

int main()
{
    char C[5];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0'; // Null character. This is needed to terminate the string.
    printf("%s\n", C);

    // Remember, array size always has to be string + 1.

    char c1[6] = "Hello";
    char *c2;
    c2 = c1;
    printf("%c\n", c2[1]);
    return 0;
}