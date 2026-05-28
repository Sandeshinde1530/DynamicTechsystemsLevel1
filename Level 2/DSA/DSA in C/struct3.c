#include<stdio.h>

struct demo
{
    int A ;
    int Arr[10];
};


int main()
{
    struct demo dobj;

    dobj.A = 10;
    dobj.Arr[0] = 0;
    dobj.Arr[1] = 1;
    dobj.Arr[2] = 2;
    dobj.Arr[3] = 3;

    printf("%d\n",dobj.A);
    
    for(int i = 0 ; i < 4; i++)
    {
        printf("%d\n",dobj.Arr[i]);
    }
    
    return 0;
}