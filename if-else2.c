#include <stdio.h>
int main()
{
    int No1;

    printf("enter first number:\n");
    scanf("%d", &No1);

    int Result = No1 % 2;

    // Condtion to check number is odd or not
    if (Result != 0)
    {
        printf("Number is odd");
    }
    else
    {
        printf("Numer is even");
    }

    return 0;
}