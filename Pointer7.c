#include<stdio.h>

int main()
{
   int No1 = 11;

   int *p = &No1;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;

    printf("%d\n",*p);
    printf("%d\n",**q);
    printf("%d\n",***r);
    printf("%d\n",****s);
    printf("%d\n",*****t);

    return 0;
}
