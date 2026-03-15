#include <stdio.h>

void PrintN(int iNo)
{
    int i = 0;

    for (i = 1; i <= iNo; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    int iValue = 0;

    printf("enter a number:\n");
    scanf("%d", &iValue);

    PrintN(iValue);

    return 0;
}
