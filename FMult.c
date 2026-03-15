#include<stdio.h>

float Multiplication(float No1 , float No2)
{
    float Ans = 0.0f;
    Ans = No1 * No2;

    return Ans;

}

int main()
{
    float Value1 = 0 , Value2 = 0 , Ret = 0;

    printf("Enter 2 numbers:");
    scanf("%f %f",&Value1  , &Value2);

   Ret =  Multiplication(Value1 , Value2);

   printf("Multiplication is : %.2f\n",Ret);


    return 0;
}