#include <stdio.h>

void MultiplicationTable(int iNo)
{
    int i = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", iNo, i, i * iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("enter a number:\n");
    scanf("%d", &iValue);

    MultiplicationTable(iValue);

    return 0;
}

// print the multiplication table of number
// start
// input number
// number * 1 to  10
// display it
// stop