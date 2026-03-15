#include <stdio.h>
#define DOZEN 12
#define PI 3.14
/// Program to understand the Concept of PreProcessor

int main()
{
    int No = 0;

    printf("Enter a number:");
    scanf("%d", &No);

    printf("%d\n", DOZEN * No);

    printf("%d\n", DOZEN);
    printf("%.2f", PI);

    return 0;
}