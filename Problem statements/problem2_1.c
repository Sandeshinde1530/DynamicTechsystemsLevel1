#include <stdio.h>

int main()
{
    int iValue = 0;

    printf("enter a number : \n");
    scanf("%d", &iValue);

    if (iValue == 0)
    {
        printf("Entered number is Zero");
    }
    else if (iValue > 0)
    {
        printf("Entered number is Positive\n");
    }
    else
    {
        printf("entered number is negative\n");
    }

    return 0;
}

// algorithm :-

// start

// input a number
// if number = 0
// display number is zero
// if number > 0
// display number positive
// if number  < 0
// display number is negative
// end
