#include<stdio.h>

int C = 30;

void demo()
{   
    int B = 21;
    printf("%d\n",B);
    printf("%d\n",C);

    printf("%d\n",A); // NOt Allowed
}

int main()
{
    int A = 10;

    printf("%d\n",A);
    printf("%d\n",C);
    demo();

    printf("%d\n",B); // NOt Allowed
  
    return 0 ;
}