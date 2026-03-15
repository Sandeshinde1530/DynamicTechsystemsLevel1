#include <stdio.h>

int ReverseNum(int No)
{
    int Digit = 0, Rev = 0;

    while (No > 0)
    {
        Digit = No % 10;
        Rev = Rev * 10 + Digit;
        No = No / 10;
    }
    return Rev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = ReverseNum(iValue);

    printf("The Reversed numbber is:%d\n", iRet);

    return 0;
}