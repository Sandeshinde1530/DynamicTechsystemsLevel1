#include <stdio.h>

int main()
{
    int iNo = 0;
    int i = 0;

    printf("enter a number:\n");
    scanf("%d", &iNo);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", iNo, i, i * iNo);
    }

    return 0;
}

// print the multiplication table of number
// start
// input number
// number * 1 to  10
// display it
// stop