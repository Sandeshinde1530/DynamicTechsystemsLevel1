#include <stdio.h>

int Max(int iNo1, int iNo2)
{

    if (iNo1 > iNo2)
    {
        return iNo1;
    }
    else if (iNo1 == iNo2)
    {
        return 0;
    }
    else
    {
        return iNo2;
    }
}

int main()
{
    int a = 0, b = 0, iRet = 0;

    printf("Enter 2 numbers");
    scanf("%d %d", &a, &b);

    iRet = Max(a, b);

    if (iRet == 0)
    {
        printf("Both are same \n");
    }
    else
    {
        printf("%d is greater\n", iRet);
    }

    return 0;
}
// find maximum in two numbers

// start
// input 2 numbers as a , b
// if a > b
// a is greater
// else
// b is greater
// stop