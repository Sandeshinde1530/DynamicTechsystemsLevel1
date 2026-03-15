// Area of Rectangle = l*b
// Area of triangel =1/2 b*h

#include <stdio.h>

int main()
{
    int length = 0, breadth = 0, Area = 0;

    printf("Enter the lenght of rectangle\n");
    scanf("%d", &length);

    printf("Enter the breadth of rectangle\n");
    scanf("%d", &breadth);

    Area = length * breadth;

    printf("The Area of Rectangle is : %d", Area);

    return 0;
}