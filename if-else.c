#include <stdio.h>
int main()
{
    int No1;

    printf("enter first number:\n");
    scanf("%d", &No1);

    int Result = No1 % 2;

    // condition to check number is even or not

    if (Result == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Numer is odd");
    }

    return 0;
}