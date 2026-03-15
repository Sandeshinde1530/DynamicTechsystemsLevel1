#include <stdio.h>

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};
    int i = 0;

    printf("Elements of array using printf\n");
    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[4]);

    printf("Elements of array using WHile LOOP\n");
    while (i < 5)
    {
        printf("%d\n", Arr[i]);

        i++;
    }

    return 0;
}