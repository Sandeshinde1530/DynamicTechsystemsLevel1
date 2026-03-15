// program to convert temperature from Celcius to fahrenheit
#include <stdio.h>

int main()
{
    float Cel, Fah;
    printf("enter temprature in celcius");
    scanf("%f", &Cel);

    Fah = (Cel * 9 / 5) + 32;

    printf("Temp in Fah: %.2f", Fah);

    return 0;
}