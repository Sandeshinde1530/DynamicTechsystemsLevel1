#include<stdio.h>

int main()
{
    int No1 = 24;
    char ch = 'D';
    float f = 59.43;
    double d = 12345.6789;

    int *iptr = &No1;
    char *cptr = &ch;
    float *fptr = &f;
    double *dptr = &d;

    printf("%d\n",No1);//24
    printf("%c\n",ch);//D
    printf("%f\n",f);//59.43
    printf("%lf\n",d);//12345.6789

    printf("\n%d\n",iptr);//100
    printf("%d\n",cptr);//200
    printf("%d\n",fptr);//300
    printf("%d\n",dptr);//400

    printf("\n%d\n",&iptr);//500
    printf("%d\n",&cptr);//600
    printf("%d\n",&fptr);//700
    printf("%d\n",&dptr);//800

    printf("\n%d\n",*iptr);//24
    printf("%c\n",*cptr);//D
    printf("%f\n",*fptr);//59.43
    printf("%lf\n",*dptr);//12345.6789

    printf("\n%d\n",sizeof(No1));//4
    printf("%d\n",sizeof(ch));//1
    printf("%d\n",sizeof(f));//4
    printf("%d\n",sizeof(d));//8

    printf("\n%d\n",sizeof(iptr));//8
    printf("%d\n",sizeof(cptr));//8
    printf("%d\n",sizeof(fptr));//8
    printf("%d\n",sizeof(dptr));//8


    //NO1  = 24
    // iptr = 100
    // cptr = 200
    //&dptr = 800




    return 0;
}