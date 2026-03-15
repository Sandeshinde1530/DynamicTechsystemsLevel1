#include <stdio.h>
#include <stdbool.h>

int main()
{
    int iNo = 0;
    int i = 0;

    printf("Enter a number:\n");
    scanf("%d", &iNo);

    for (i = 2; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            printf("the number is not prime");
            break;
        }
    }

    return 0;
}