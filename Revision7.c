#include <stdio.h>

int main()
{

    int Arr[5];
    int i = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Entered 5 numbers are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", Arr[i]);
    }

    return 0;
}