// program to convert currency from INR to USD
#include <stdio.h>

int main()
{
    float INR, USD;
    printf("Enter Rupees\n");
    scanf("%f", &INR);

    USD = INR / 88.64;

    printf("USD = %f", USD);

    return 0;
}