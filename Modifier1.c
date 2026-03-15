#include<stdio.h>


int main()
{
    int A = 10;
    short  int B = 20;
    long int C = 30;

    printf("%d\n",sizeof(A));//4
    printf("%d\n",sizeof(B));//2
    printf("%d\n",sizeof(C));//8

    return 0;
}