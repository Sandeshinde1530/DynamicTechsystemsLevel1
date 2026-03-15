#include <stdio.h>

void PrintTable(int No)
{
    int i = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", No, i, i * No);
    }
}

int main()
{

    int Value = 0;

    printf("enter a number:");
    scanf("%d", &Value);

    PrintTable(Value);

    return 0;
}