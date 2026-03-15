#include<stdio.h>

int main()
{
   int No1 = 11;

   int *ptr1 = &No1;
   int **ptr2 = &ptr1;

   printf("No1 = %d\n" , No1);//11
   printf("ptr1 = %d\n" , ptr1);//100
   printf("ptr2 = %d\n" , ptr2);//200


   printf("\n&No1 : %d\n" , &No1);//100
   printf("&ptr1 = %d\n",&ptr1);//200
   printf("&ptr2 = %d\n" , &ptr2);//300

   printf("\n*ptr1 = %d\n" , *ptr1);//11
   printf("*ptr2 = %d\n",*ptr2);//100
   printf("**ptr2 = %d\n",**ptr2);//11

    return 0;
}