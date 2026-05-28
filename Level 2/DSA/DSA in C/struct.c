#include<stdio.h>

struct demo
{
    int A ;
    char c;
};


int main()
{
    struct demo dobj;

    dobj.A = 10;
    dobj.c = 'A';

    printf("%d\n",sizeof(dobj));
    printf("%d\n",dobj.A);
    printf("%c\n",dobj.c);

    return 0;
}