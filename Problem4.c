// To check if number is even or odd

#include <stdio.h>

int main()
{
    int No = 0;

    printf("Enter a number: ");
    scanf("%d", &No);

    if (No == 0)
    {
        printf("Number is Zero\n");
    }
    else if (No % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}