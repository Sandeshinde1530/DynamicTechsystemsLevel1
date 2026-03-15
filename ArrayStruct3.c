#include <stdio.h>

struct Demo
{
    int i;
    char c;
};

int main()
{
    struct Demo Arr[2];

    printf("enter a number and a character :\n");
    scanf("%d %c", &Arr[0].i, &Arr[0].c);

    printf("enter a number and a character :\n");
    scanf("%d %c", &Arr[1].i, &Arr[1].c);

    printf("Arr[0].i = %d \t Arr[0].c = %c\n", Arr[0].i, Arr[0].c);
    printf("Arr[1].i = %d \t Arr[1].c = %c\n", Arr[1].i, Arr[1].c);

    return 0;
}