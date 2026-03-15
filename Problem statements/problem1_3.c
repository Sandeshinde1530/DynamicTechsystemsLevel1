#include <stdio.h>
#include <stdbool.h>

bool ChkEvn(int No)
{
    if (No % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int Value = 0;
    bool bRet = false;

    printf("enter a number:\n");
    scanf("%d", &Value);

    bRet = ChkEvn(Value);

    if (bRet == true)
    {
        printf("%d is Even\n", Value);
    }
    else
    {
        printf("%d is ODD \n", Value);
    }

    return 0;
}