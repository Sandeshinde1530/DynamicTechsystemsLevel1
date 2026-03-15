#include <stdio.h>

int main()
{
    int No = 0;
    int iCount = 0;

    printf("enter a number :\n");
    scanf("%d", &No);

    while (No > 0)
    {
        No = No / 10;
        iCount++;
    }

    printf("The Number of Digits are: %d\n", iCount);

    return 0;
}