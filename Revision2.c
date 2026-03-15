#include <stdio.h>
int main()
{

    int i = 0;
    int No = 0;

    printf("enter a number:");
    scanf("%d", &No);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", No, i, i * No);
    }

    return 0;
}