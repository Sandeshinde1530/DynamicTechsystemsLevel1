#include<stdio.h>

int main()
{
    int A = 11;//100
    int B = 21;//200

    int *ptr1 = &A;//300

    int *ptr2 = &B;//400


    printf("%d\n",A);//11
    printf("%d\n",B);//21
    printf("%d\n",ptr1);//100
    printf("%d\n",ptr2);//200
    printf("%d\n",&ptr2);//400
    printf("%d\n",&ptr1);//300
    printf("%d\n",&A);//100
    printf("%d\n",&B);//200

    return 0;
}