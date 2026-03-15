#include <stdio.h>

int SumDigits(int No)
{
    int iSum = 0, Digit = 0;

    while (No > 0)
    {
        Digit = No % 10;
        iSum = iSum + Digit;
        No = No / 10;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = SumDigits(iValue);

    printf("The Sum of digits are:%d\n", iRet);

    return 0;
}