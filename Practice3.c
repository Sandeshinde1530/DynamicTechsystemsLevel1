#include <stdio.h>

int main()
{
    int i = 0;

    printf("Odd numbers from 51 to 1:\n");

    for (i = 51; i >= 1; i -= 2)
    {
        printf("%d\n", i);
    }

    return 0;
}