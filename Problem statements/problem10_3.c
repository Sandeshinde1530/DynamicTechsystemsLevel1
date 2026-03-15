// Area of Rectangle = l*b
// Area of triangel =1/2 b*h

#include <stdio.h>

int AreaOfRectangle(int l, int b)
{
    int Area = 0;

    Area = l * b;
    return Area;
}

int main()
{
    int length = 0, breadth = 0;
    int iRet = 0;

    printf("Enter the lenght of rectangle\n");
    scanf("%d", &length);

    printf("Enter the breadth of rectangle\n");
    scanf("%d", &breadth);

    iRet = AreaOfRectangle(length, breadth);

    printf("Area of rectangle is %d\n", iRet);

    return 0;
}