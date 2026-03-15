#include<stdio.h>

void Addition(int No1 , int No2)
{
    int Ans = No1 + No2;

    printf("Addition is :%d", Ans);
}


int main()
{
    int Value1 = 0 , Value2 = 0;

    printf("Enter First Numbers: ");
    scanf("%d",&Value1);

    printf("Enter 2nd Number:");
    scanf("%d",&Value2);

    Addition(Value1 , Value2);

    return 0;
}