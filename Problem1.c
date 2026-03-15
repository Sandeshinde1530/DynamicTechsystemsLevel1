// program to convert currency from dollar to indian rupees
#include <stdio.h>

int main()
{
    int USD;

    printf("enter value in USD:\n");
    scanf("%d", &USD);

    float INR = 88.64 * USD;

    printf("INDIAN rupees = %.2f", INR);

    return 0;
}