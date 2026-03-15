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

void Display(int *ptr2)
{
    int i = 0;
    printf("Array elements are:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", ptr2[i]);
    }
}
int main()
{
    int Arr[5];

    Accept(Arr);
    Display(Arr);

    return 0;
}