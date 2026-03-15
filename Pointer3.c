#include<stdio.h>

int main()
{
    int No1 = 24;//100

    int *ptr = &No1;//200

    printf("%d\n",No1);//24
    printf("%d\n",ptr);//100
    printf("%d\n",&No1);//100
    printf("%d\n",&ptr);//200
    printf("%d\n",*ptr);//24

    printf("sizeof No1 = %d\n",sizeof(No1));//4
    printf("sizeof ptr = %d\n",sizeof(ptr));//8

    return 0;
}