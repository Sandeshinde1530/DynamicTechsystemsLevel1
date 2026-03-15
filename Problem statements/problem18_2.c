#include <stdio.h>
#include <math.h>
int main()
{
    int No = 0, Digit = 0, Sum = 0;
    int temp = 0, Count = 0;
    printf("Enter the number\n");
    scanf("%d", &No);

    temp = No;

    // to count number of digit
    while (temp > 0)
    {
        Count++;
        temp = temp / 10;
    }

    temp = No;

    while (temp > 0)
    {
        Digit = temp % 10;
        Sum = Sum + (int)pow(Digit, Count);
        // printf("%d\n", Sum);
        temp = temp / 10;
    }

    printf("%d\n", Sum);
    printf("%d\n", No);

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
