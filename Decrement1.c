#include<stdio.h>

int main()
{
    int A = 15 , B  = 21;
    int No1 = 0 , No2 = 0;

    No1 = B--;// Post-Decrement(First Initialize then Decrement)
    No2 = --A;// Pre- Decrement(First Decrement then Initialize)

    printf("B = %d\n",B);//20
    printf("No1 = %d\n",No1);//21

    printf("A = %d\n",A);//14
    printf("No2 = %d\n",No2);  //14 

    return 0;
}