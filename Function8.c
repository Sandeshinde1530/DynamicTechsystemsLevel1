#include<stdio.h>

float Addition(float No1 , float No2)
{
    float Ans = 0.0f;
    Ans = No1 + No2;

    return Ans;
}

int main()
{
    float Value1 = 0.0f , Value2 = 0.0f ;
    float Ret = 0;

    printf("Enter First Numbers: ");
    scanf("%f",&Value1);

    printf("Enter 2nd Number:");
    scanf("%f",&Value2);

    Ret = Addition(Value1 , Value2);
    
    printf("Addition is :%.3f", Ret);
    return 0;
}