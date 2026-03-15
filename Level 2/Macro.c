#include<stdio.h>

#define DOZEN 12

int main()
{
    int iNo = 0;

    printf("Enter the value in dozen:");
    scanf("%d",&iNo);

    printf("%d dozen is equals to %d Units",iNo , DOZEN * iNo);

    iNo =DOZEN + DOZEN;

    return 0;
}