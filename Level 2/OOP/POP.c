#include<stdio.h>

int Addition(int No1 , int No2)
{
    int iAdd = 0;

    iAdd = No1 + No2;

    return iAdd;
}

int Substraction(int No1 ,int  No2)
{
    int iSub = 0;

    iSub = No1 - No2;

    return iSub;
}

int main()
{
    int ivalue1 = 0  , ivalue2 = 0 , iRet = 0;

    printf("Enter two numbers\n");
    scanf("%d %d",&ivalue1 , &ivalue2);

    iRet = Addition(ivalue1 , ivalue2);
    printf("Addition is : %d\n",iRet);

    iRet = Substraction(ivalue1 , ivalue2);
    printf("Substraction is : %d\n",iRet);

    return 0 ;
}