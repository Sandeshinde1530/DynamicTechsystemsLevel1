#include <stdio.h>

void PrintArray(int *ptr)
{
    int i = 0;

    printf("in PrintArray Function\n");

    printf("Elements of array using WHile LOOP\n");
    while (i < 5)
    {
        printf("%d\n", ptr[i]);

        i++;
    }
}

int main()
{
    printf("In main Function\n");
    int Arr[5] = {10, 20, 30, 40, 50};

    PrintArray(Arr);
    printf("returning In main Function\n");

    return 0;
}