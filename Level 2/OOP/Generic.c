#include<stdio.h>


int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99;
    double d = 90.9876;


//Specific Pointers
    char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    printf("%c\n",*cp);
    printf("%d\n",*ip);
    printf("%.2f\n",*fp);
    printf("%lf\n",*dp);
    
    // Generic Pointer

    void *vp = NULL; // we can use any name for void pointer   

    vp = &ch;
    printf("%c\n",*(char *)vp);
    
    vp = &i;
    printf("%d\n",*(int *)vp);
    
    

    return 0;
}