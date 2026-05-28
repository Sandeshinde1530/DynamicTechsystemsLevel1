#include<stdio.h>

int main()
{
    int Arr[5] = {0};

    printf("enter 5 numbers:");
    
    for(int i = 0 ; i< 5 ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    
    printf("entered 5 numbers are:");
    for(int i = 0 ; i< 5 ; i++)
    {
        printf("%d\n",Arr[i]);
    }
    

    return 0;
}