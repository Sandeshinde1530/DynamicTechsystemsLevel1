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

    obj1.no = 10;
    obj1.f = 21.11;
    obj1.d = 1235.439;
    obj1.i = 51;

    printf("no : %d\n" , obj1.no);
    printf("f : %.2f\n" , obj1.f);
    printf("d : %.3lf\n" , obj1.d);
    printf("i : %d\n" , obj1.i);


    
    return 0;
}