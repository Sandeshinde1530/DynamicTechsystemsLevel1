#include <stdio.h>

int main()
{
    int iNo = 0, i = 0;
    double Fact = 1;
    printf("Enter a number :\n");
    scanf("%d", &iNo);

    for (i = iNo; i >= 1; i--)
    {
        Fact = Fact * i; // Fact *= i;
    }

    printf("Factorial  is :%.2lf", Fact);

    return 0;
}
// Factorial
//  start
//  input a number n
// in Loop i = N
//  fact = N * i; i--;
// display Fact(Factorial)
//  stop;
