// print the table of number

#include <stdio.h>

int main()
{
    int No = 0, i = 0;

    printf("Enter a number: ");
    scanf("%d", &No);

    for (i = 1; i <= 10; ++i)
    {
        printf("%d X %d = %d\n", No, i, No * i);
    }

    return 0;
}