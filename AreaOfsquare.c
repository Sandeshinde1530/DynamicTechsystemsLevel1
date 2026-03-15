#include <stdio.h>

int main()
{
    float side, Area;

    printf("enter the side of square:");
    scanf("%f", &side);

    Area = side * side;

    printf("Area of square is : %.2f", Area);

    return 0;
}