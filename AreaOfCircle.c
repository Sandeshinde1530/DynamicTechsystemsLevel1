#include <stdio.h>

int main()
{
    float r, Area;

    printf("enter the radius of circle:");
    scanf("%f", &r);

    Area = 3.14 * r * r;

    printf("Area of square is : %.2f", Area);

    return 0;
}