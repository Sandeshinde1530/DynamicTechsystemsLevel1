#include<stdio.h>

void Addition(int No1 , int No2)
{
    int Ans = No1 + No2;

    printf("Addition is :%d", Ans);
}


int main()
{
    int Value1 = 10 , Value2 = 20;

    Addition(Value1 , Value2);

    return 0;
}