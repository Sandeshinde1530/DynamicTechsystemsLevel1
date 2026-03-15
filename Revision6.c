#include <stdio.h>

void PrintArray(int *ptr)
{
    int i = 0;

    printf("Entered Values\n");
    while (i < 5)
    {
        printf("%d\n", ptr[i]);

        i++;
    }
}

void ScanArray(int *ptr2)
{
    int i = 0;

    printf("Enter 5 value:\n");
    while (i < 5)
    {
        scanf("%d", &ptr2[i]);
        i++;
    }
}

int main()
{

    int Arr[5];

    ScanArray(Arr);
    PrintArray(Arr);

    return 0;
}