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

void MinValue(int *ptr)
{
    int Min = ptr[0];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        if (ptr[i] < Min)
        {
            Min = ptr[i];
        }
    }
    printf("Minimum value is : %d\n", Min);
}

int main()
{
    int Arr[5];
    int i = 0;
    Accept(Arr);

    MinValue(Arr);

    return 0;
}