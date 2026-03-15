#include <stdio.h>

void ChkEvn(int No)
{
    if (No % 2 == 0)
    {
        printf("%d is even\n", No);
    }
    else
    {
        printf("%d is Odd\n", No);
    }
}

int main()
{
    int Value = 0;

    printf("enter a number:\n");
    scanf("%d", &Value);

    ChkEvn(Value);

    return 0;
}