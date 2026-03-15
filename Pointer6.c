#include<stdio.h>

int main()
{
   int No1 = 11;

   int *ptr1 = &No1;
   int *ptr2 = &No1;


   (*ptr2)++;
   printf("%d\n",No1);

   
//    (*ptr1)++;
//    printf("%d\n",No1);//11


//    printf("%d\n",No1);//11
//    printf("%d\n",ptr1);//100
//    printf("%d\n",ptr2);//100

//    printf("\n%d\n",&No1);//100
//    printf("%d\n",&ptr1);//200
//    printf("%d\n",&ptr2);//300

//    printf("%d\n",*ptr1);//11
//    printf("%d\n",*ptr2);//11




  

    return 0;
}

//No1 = 11;
// ptr1 = 100;
// ptr2 = 100;

// *ptr1 = 11;
// *ptr2 = 11;

// &No1 = 100;
// &ptr1 = 200;
// &ptr2 = 300;