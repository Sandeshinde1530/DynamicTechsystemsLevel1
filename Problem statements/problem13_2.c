#include <stdio.h>

void CheckPrime(int iNo)
{
    int i = 0;
    int flag = 1;
    int Count = 0;

    for (i = 2; i <= iNo / 2; i++, Count++)
    {
        if (iNo % i == 0)
        {
            flag = 0;
        }
    }

    if (flag == 1)
    {
        printf("Number is Prime\n");
    }
    else
    {
        printf("The number is not prime\n");
    }

    printf("Iterations needed for value N = 13 are %d \n", Count);
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    CheckPrime(iValue);

    return 0;
}