#include<stdio.h>

float Division(float No1 , float No2)
{
    float Ans = 0.0f;
    Ans = No1 / No2;

    return Ans;

}

int main()
{
    float Value1 = 0 , Value2 = 0 , Ret = 0;

    printf("Enter 2 numbers:");
    scanf("%f %f",&Value1  , &Value2);

   Ret =  Division(Value1 , Value2);

   printf("Division is : %.2f\n",Ret);


    return 0;
}