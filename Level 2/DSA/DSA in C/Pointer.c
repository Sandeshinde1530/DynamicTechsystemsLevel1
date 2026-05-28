#include<stdio.h>

int main()
{
    int *ptr = NULL;//100
    int A = 10;//200
    *ptr = &A;

    printf("%d\n",ptr);//200
    printf("%d\n",&A);//200
    printf("%d\n",A);//10
    printf("%d\n",*ptr);//10
    printf("%d\n",&ptr);//100

    return 0;
}