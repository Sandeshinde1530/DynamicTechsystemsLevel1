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
    int i = 0;
    Accept(Arr);

    int Min = Arr[0];

    for (i = 0; i < 5; i++)
    {
        if (Arr[i] < Min)
        {
            Min = Arr[i];
        }
    }

    printf("Minimum value is : %d\n", Min);

    return 0;
}