#include <stdio.h>

int main()
{
    int No1, No2;

    printf("Enter first number\n");
    scanf("%d", &No1);

    printf("Enter second number\n");
    scanf("%d", &No2);

    int Ans = No1 + No2;

    printf("Addition is : %d", Ans);

    return 0;
}
