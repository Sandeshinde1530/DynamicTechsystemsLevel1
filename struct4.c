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
    struct Demo obj3;//20

    struct Demo *dptr = &obj3;

    printf("%d\n",&obj3);
    printf("%d\n",dptr);

    //stored values using indirect accessin operator
    dptr->no = 111;
    dptr->f = 212.23;
    dptr->d = 23.7892;
    dptr->i = 221;

    printf("Using Indirect accessing operator\n");
    printf("no : %d\n",dptr->no );
    printf("f : %.2f\n",dptr->f );
    printf("d : %.4lf\n",dptr->d );
    printf("i : %d\n",dptr->i );

    
    return 0;
}