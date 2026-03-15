#include <stdio.h>

float AreaOfSquare(float side)
{
    float Area;

    Area = side * side;

    return Area;
}

int main()
{
    float value, Ret;

    printf("enter the side of square:");
    scanf("%f", &value);

    Ret = AreaOfSquare(value);

    printf("Area of square : %.2f", Ret);

    return 0;
}
