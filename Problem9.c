// printing array elements using For Loop

#include <stdio.h>

int main()
{
    int Arr[5];
    int i = 0;

    printf("enter 5 numbers: ");
    // scanf("%d", &Arr[0]);
    // scanf("%d", &Arr[1]);
    // scanf("%d", &Arr[2]);
    // scanf("%d", &Arr[3]);
    // scanf("%d", &Arr[4]);

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Array elements are :\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", Arr[i]);
    }

    return 0;
}
