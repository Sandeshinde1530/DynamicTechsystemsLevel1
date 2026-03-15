#include<stdio.h>

int Addition(int value1 , int value2)
{
    int Result = 0;
    Result = value1 + value2;

    return Result;
}

int main()
{
    int No1 = 0 , No2 = 0 , Ans = 0; 

    printf("Enter First Number:\n");
    scanf("%d",&No1);

    printf("Enter second Number:\n");
    scanf("%d",&No2);


    Ans = Addition(No1 , No2);

    printf("Addition is : %d\n", Ans);

    return 0;
}