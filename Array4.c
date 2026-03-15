#include<stdio.h>

int main()
{
    float Arr[] = {11.15,21.15,51.15 , 12.45 , 15.59}; // member initialization list
    

    printf("%.2f\n", Arr[0]);//11
    printf("%.2f\n", Arr[1]);//21
    printf("%.2f\n", Arr[2]);//51
    
    printf("%d\n", &Arr[0]);//100
    printf("%d\n", &Arr[1]);//104
    printf("%d\n", &Arr[2]);//108
    
    printf("%d\n",sizeof(Arr));//12
    printf("%d\n",sizeof(Arr[0]));//4
    printf("%d\n", sizeof(Arr[1]));//4
    printf("%d\n",sizeof(Arr[2]));//4


    return 0;
}