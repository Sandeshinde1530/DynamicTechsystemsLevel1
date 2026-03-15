#include <stdio.h>

int main()
{
    int No1;
    printf("Enter a number:\n");
    scanf("%d", &No1);
    int Rem = No1 % 2;

    if (Rem != 0)
    {
        printf("number is Odd\n");
    }
    else
    {
        printf("Number is Even\n");
    }
    return 0;
}
