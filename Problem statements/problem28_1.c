#include <stdio.h>

int main()
{
    int Arr[5];
    int i = 0;

    printf("enter the 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Array elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", Arr[i]);
    }

    return 0;
}