#include <stdio.h>

int CountDigits(int A)
{
    int iCount = 0;
    while (A > 0)
    {
        A = A / 10;
        iCount++;
    }

    return iCount;
}

int main()
{
    int No = 0;
    int iRet = 0;

    printf("enter a number :\n");
    scanf("%d", &No);

    iRet = CountDigits(No);

    printf("The Number of Digits are: %d\n", iRet);

    return 0;
}