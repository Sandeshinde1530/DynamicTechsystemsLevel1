#include<stdio.h>

struct demo
{
    int A ;
    char c;
};


int main()
{
    struct demo dobj;
    struct demo *dptr =  &dobj;

    int A;
    int *p = &A;

    dobj.A = 10;
    dobj.c = 'A';

    printf("%d\n",sizeof(dobj));
    printf("%d\n",dptr->A);
    printf("%c\n",dptr->c);

    return 0;
}