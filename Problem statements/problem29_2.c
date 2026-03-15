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

void ArrSum(int *ptr)
{
    int iSum = 0;
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        iSum = iSum + ptr[i];
    }

    printf("Sum of array elements is: %d\n", iSum);
}

int main()
{
    int Arr[5];

    Accept(Arr);
    ArrSum(Arr);

    return 0;
}