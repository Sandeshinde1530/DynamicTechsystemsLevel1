#include<stdio.h>

int main()
{
    int A = 15 , B  = 21;
    int No1 = 0 , No2 = 0;

    No1 = ++B; // pre-Increment
    No2 = A++;//post-increment

    printf("B = %d\n",B);//22
    printf("No1 = %d\n",No1);//22

    printf("A = %d\n",A);//16
    printf("No2 = %d\n",No2);//15   

    return 0;
}