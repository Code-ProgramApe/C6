#include <stdio.h>

int main()
{
    int feet, fathoms;
    fathoms = 2;
    feet = 6 * fathoms;

    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
    getchar();

    return 0;
}