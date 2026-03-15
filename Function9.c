#include<stdio.h>

int Substraction(int No1 , int No2)
{
    int Ans = 0;
    Ans = No1 - No2;

    return Ans;
}

int main()
{
    int value1 = 0 , value2 = 0  ,Ret = 0;

    printf("Enter two numbers :");
    scanf("%d %d",&value1 , &value2);

    Ret = Substraction(value1 , value2);

    printf("%d\n",Ret);

    return 0;
}