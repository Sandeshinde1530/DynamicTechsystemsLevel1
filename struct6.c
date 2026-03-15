#include<stdio.h>

struct Demo2 // structure declaration
{
    int no; 
    char ch;
    float f;
};

int main()
{
    struct Demo2 dobj;//9

    struct Demo2 *dptr = &dobj;

    printf("%d\n",sizeof(dobj));


    
    return 0;
}