#include<stdio.h>
int main()
{
    int No = 0;
    int Mult = 1;
    printf("enter a number :\n");
    scanf("%d",&No);
    for(int i = 1 ; i <=  No / 2; i++)
    {
        if(No%i == 0)
        {
            Mult = Mult * i;
        }
    
    }
    printf("%d\n",Mult);
    return 0;
}