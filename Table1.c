#include <stdio.h>

int main()
{
    int i = 0, No = 0;

    printf("Enter a number: ");
    scanf("%d", &No);

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", No * i);
    }

    return 0;
}