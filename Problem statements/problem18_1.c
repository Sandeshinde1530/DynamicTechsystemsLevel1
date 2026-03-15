#include <stdio.h>

int main()
{
    int No = 0, Digit = 0, Sum = 0;
    int temp = 0;
    printf("Enter the number\n");
    scanf("%d", &No);

    temp = No;

    while (temp > 0)
    {
        Digit = temp % 10;
        Sum = Sum + (Digit * Digit * Digit);
        temp = temp / 10;
    }

    if (Sum == No)
    {
        printf("The number is An ArmStrong Number\n");
    }
    else
    {
        printf("IT is not an armstrong number\n");
    }

    return 0;
}
