#include <stdio.h>

void Accept(int *ptr)
{
    int i = 0;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }
}

void Display(int *ptr)
{
    int i = 0;

    printf("Array elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
    printf("\n");
}

int main()
{
    int Arr[5] = {0};
    Accept(Arr);
    int Reversed[5] = {0};
    int i = 0, j = 0;

    for (i = 4, j = 0; i >= 0, j < 5; i--, j++)
    {
        Reversed[j] = Arr[i];
    }

    printf("Normal Array:\n");
    Display(Arr);

    printf("Reversed Array:\n");
    Display(Reversed);

    return 0;
}