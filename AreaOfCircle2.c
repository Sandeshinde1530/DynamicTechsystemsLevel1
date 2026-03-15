#include <stdio.h>

void AreaOfCircle(float radius)
{
    float Area;

    Area = 3.14 * radius * radius;

    printf("Area of square is : %.2f", Area);
}

int main()
{
    float r, Area;

    printf("enter the radius of circle:");
    scanf("%f", &r);

    AreaOfCircle(r);

    return 0;
}