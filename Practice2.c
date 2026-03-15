#include <stdio.h>
// Find the Area of Circle Using Radius

/*Start
1 = print Enter Radius
2 =  Input Radius
3 = Area = 3.14 *r*r ;
4. print Area
5.Stop*/

int main()
{
    float r = 0.0f, Area = 0.0f;

    printf("Enter the radius:");
    scanf("%f", &r);

    Area = 3.14 * r * r;

    printf("Area of Circle is: %f\n", Area);

    return 0;
}