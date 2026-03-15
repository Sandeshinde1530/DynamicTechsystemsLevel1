#include <stdio.h>

float AreaOfCircle(float radius)
{
    float Area;

    Area = 3.14 * radius * radius;

    return Area;
}

int main()
{
    float r, Ret;

    printf("enter the radius of circle:");
    scanf("%f", &r);

    Ret = AreaOfCircle(r);

    printf("Area of Circle is : %.2f", Ret);

    return 0;
}