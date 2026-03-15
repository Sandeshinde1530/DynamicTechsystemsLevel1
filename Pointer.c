#include<stdio.h>

int main()
{
    int A = 21;

    int *ptr = &A;


    printf("%d\n",A);//21
    printf("%d\n",&A);//100
    printf("%d\n",ptr);//100

    printf("%d\n" ,sizeof(A) );//4
    printf("%d\n" ,sizeof(ptr));//8


    return 0;
}