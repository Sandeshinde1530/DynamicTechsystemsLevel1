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

void MaxValue(int *ptr)
{
    int Max = ptr[0];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        if (ptr[i] > Max)
        {
            Max = ptr[i];
        }
    }
    printf("Maximum value is : %d\n", Max);
}

int main()
{
    int Arr[5];
    int i = 0;
    Accept(Arr);

    MaxValue(Arr);

    return 0;
}