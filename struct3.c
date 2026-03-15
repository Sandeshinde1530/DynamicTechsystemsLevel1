#include<stdio.h>

struct Demo // structure declaration
{
    int no; // 4
    float f;//4
    double d;//8
    int i;//4
};

int main()
{
    struct Demo obj1;//20
    struct Demo obj2;//20

    obj2.no = 20;
    obj2.f = 31.21;
    obj2.d = 5434.2489;
    obj2.i = 101;

    printf("no : %d\n" , obj2.no);
    printf("f : %.2f\n" , obj2.f);
    printf("d : %.3lf\n" , obj2.d);
    printf("i : %d\n" , obj2.i);


    
    return 0;
}