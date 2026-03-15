#include <stdio.h>

void AreaOfSquare(float side)
{
    float Area;

    Area = side * side;

    printf("Area of square is : %.2f", Area);
}

int main()
{
    float side;

    printf("enter the side of square:");
    scanf("%f", &side);

    AreaOfSquare(side);

    return 0;
}
