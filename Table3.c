#include <stdio.h>

/////////  he run zal pn kall nahi

int main()
{
    int i = 0, No = 0;

    printf("Enter a number: ");
    scanf("%d", &No);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", No, i, No * i); // 12 x 1 = 12;
    }

    return 0;
}