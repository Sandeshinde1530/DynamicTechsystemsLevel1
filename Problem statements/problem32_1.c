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
    int i = 0, EvnCount = 0, OddCount = 0;

    Accept(Arr);

    for (int i = 0; i < 5; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            EvnCount++;
        }
        else
        {
            OddCount++;
        }
    }

    printf("evencount from the array is :%d \nOdd Count from the array is : %d\n", EvnCount, OddCount);

    return 0;
}

/*
EvnCount = 0;
OddCount = 0;
if(Arr[i] % 2 == 0)
{
    EvnCount++;
}
else
{
    OddCount++;
}
*/