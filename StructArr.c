#include<stdio.h>

struct Demo
{
    int no;
    float f;
};


int main()
{
    struct Demo dobj;

    dobj.no = 11;
    dobj.f = 21.11;

    struct Demo DemoArr[3];

    DemoArr[0].no= 21;
    DemoArr[0].f= 51.211;

    DemoArr[1].no = 31;
    DemoArr[1].f = 41.211;

    DemoArr[2].no = 51;
    DemoArr[2].f = 12.211;


    printf("%d\n",DemoArr[0].no);//21
    printf("%.2f\n",DemoArr[0].f);//51.211

    printf("%d\n",DemoArr[1].no);//31
    printf("%.2f\n",DemoArr[1].f);//41.211

    printf("%d\n",DemoArr[2].no);//51
    printf("%.2f\n",DemoArr[2].f);//12.211

    printf("%d\n%f\n",DemoArr[0].no , DemoArr[0].f);

    return 0;
}