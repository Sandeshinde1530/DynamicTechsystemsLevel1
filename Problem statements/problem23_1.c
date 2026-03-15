#include <stdio.h>
// program to find GCD
int main()
{
    int No1 = 0, No2 = 0;
    int GCD = 0;

    printf("Enter Two Numbers:\n");
    scanf("%d %d", &No1, &No2);

    for (int i = 1; i < No1 && i < No2; i++)
    {
        if (No1 % i == 0 && No2 % i == 0)
        {
            GCD = i;
        }
    }

    printf("The GCD of two numbers are:%d\n", GCD);

    return 0;
}