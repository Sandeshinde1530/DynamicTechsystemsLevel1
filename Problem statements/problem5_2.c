#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Enter 3 numbers");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is greater\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greater\n", b);
    }
    else
    {
        printf("%d is greater\n", c);
    }

    return 0;
}
