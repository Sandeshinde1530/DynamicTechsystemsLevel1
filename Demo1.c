#include<stdio.h>

int Addition(int value1 , int value2)
{
    int Ans = value1 +  value2;

    return Ans;
}


int main()
{   
    int No1  , No2 , iRet = 0;
    
    printf("Enter two numbers:");
    scanf("%d %d",&No1 , &No2);

    iRet = Addition(No1 , No2);

    printf("Addition is :%d\n",iRet);


    return 0;
}