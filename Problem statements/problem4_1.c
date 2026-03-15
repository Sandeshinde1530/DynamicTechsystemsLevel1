#include <stdio.h>

int main()
{
    int a = 0, b = 0;

    printf("Enter 2 numbers");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("%d is greater\n", a);
    }
    else if (a == b)
    {
        printf("Both are same \n");
    }
    else
    {
        printf("%d is greater\n", b);
    }

    return 0;
}
// find maximum in two numbers

// start
// input 2 numbers as a , b
// if a > b
// a is greater
// else
// b is greater
// stop