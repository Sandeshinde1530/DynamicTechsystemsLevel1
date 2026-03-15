#include<stdio.h>

#pragma pack(1)
struct Demo2 
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