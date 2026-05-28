#include<stdio.h>
#include<stdlib.h>


int main()
{
    int *Arr = NULL;

    Arr =(int *) malloc(10*sizeof(int));

    printf("enter 10 numbers :- \n");
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("entered 10 numbers are :-\n");
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d\n",Arr[i]);
    }



    return 0;
}