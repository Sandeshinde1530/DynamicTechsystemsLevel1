#include <stdio.h>

void Accept(int *ptr1)
{
    int i = 0;

    printf("enter the 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ptr1[i]);
    }
}

int main()
{
    int Arr[5];
    int iSum = 0;
    int i = 0;

    Accept(Arr);

    for (i = 0; i < 5; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("Sum of array elements is: %d\n", iSum);

    return 0;
}