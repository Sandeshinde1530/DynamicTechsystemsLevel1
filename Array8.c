#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};

    printf("%d\n",Arr[0]);//10(first element)
    printf("%d\n",Arr[1]);//20
    printf("%d\n",Arr[2]);//30
    printf("%d\n",Arr[3]);//40
    
    printf("%d\n",Arr);//100

    printf("%d\n",&Arr);//100
    printf("%d\n",&Arr[0]);//100

    printf("\n%d\n",&Arr[1]);//104
    printf("%d\n",&Arr[2]);//108
    printf("%d\n",&Arr[3]);//112
    return 0;
}