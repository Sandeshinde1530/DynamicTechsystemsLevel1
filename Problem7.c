// printing array elements using For Loop

#include <stdio.h>

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};
    int i = 0;

    printf("Array elements are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", Arr[i]);
    }

    return 0;
}
