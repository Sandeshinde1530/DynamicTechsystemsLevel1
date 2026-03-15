#include<stdio.h>

int main()
{
    int A = 21;

    const int B = 30;

    A++;//Allowed           A
    B++;//Not Allowed       NA
    printf("%d\n", A);




    return 0 ;
}