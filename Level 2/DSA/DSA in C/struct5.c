#include<stdio.h>

struct demo
{
    int A ;
    struct demo *next ;
};


int main()
{
    struct demo dobj1;
    struct demo dobj2;
    struct demo dobj3;

    dobj1.A = 10;
    dobj1.next= NULL;

    dobj2.A = 20;
    dobj2.next= NULL;

    dobj3.A = 30;
    dobj2.next= NULL;

    
    dobj1.next = &dobj2;
    dobj2.next = &dobj3;
    printf("values using only dobj1 ");
    printf("%d\n",dobj1.A);
    printf("%d\n",dobj1.next->A);
    printf("%d\n",dobj1.next->next->A);
    
    printf("values using only dobj2 ");
    printf("%d\n",dobj2.A);
    printf("%d\n",dobj2.next->A);


  
    return 0;
}