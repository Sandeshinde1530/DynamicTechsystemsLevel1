#include <stdio.h>

int main()
{
    int i = 0, No = 0;
    int first = 0, second = 1, next = 0;

    printf("How many number do you want :\n");
    scanf("%d", &No);

    while (i < No)
    {
        next = first + second;
        printf("%d\t", first);
        first = second;
        second = next;

        i++;
    }

    return 0;
}