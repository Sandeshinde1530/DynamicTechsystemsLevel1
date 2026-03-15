#include <stdio.h>

int main()
{
    int No = 0;

    printf("enter a number:\n");
    scanf("%d", &No);

    if (No % 2 == 0)
    {
        printf("%d is even\n", No);
    }
    else
    {
        printf("%d is Odd\n", No);
    }

    return 0;
}