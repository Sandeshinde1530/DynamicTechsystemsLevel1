#include <stdio.h>

union Demo
{
    int no;
    float f;
    double d;
    int i;
};

int main()
{
    union Demo dobj;

    printf("sizeof Union is :%d\n", sizeof(dobj));

    dobj.no = 10;
    printf("dobj.no : %d\n", dobj.no);

    dobj.f = 11.12;
    printf("dobj.f : %f\n", dobj.f);

    printf("dobj.no : %d\n", dobj.no);

    return 0;
}