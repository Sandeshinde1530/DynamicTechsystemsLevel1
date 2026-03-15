#include <stdio.h>

int main()
{
    float p = 0.0f, t = 0.0f, r = 0.0f;
    float SI = 0.0f;

    printf("Enter Principal amount , Time(Year) , rate of Interest: \n");
    scanf("%f %f %f", &p, &t, &r);

    SI = (p * t * r) / 100;

    printf("The Simple interest is: %.2f\n", SI);

    return 0;
}

// start
// input p,t,r
// SI  = (p*t*r)/100
// display SI
// stop