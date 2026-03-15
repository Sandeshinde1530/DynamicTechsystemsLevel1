#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL ;
    int n = 0;

    //part 1;

    printf("How many numbers:\n");
    scanf("%d",&n);
    
    Arr = (int *)malloc(n*sizeof(int));//step 1
    
    printf("enter %d numbers :\n",n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("Entered %d numbers are: \n",n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",Arr[i]);
    }
    
    //realloc
    printf("extend the array by 2 :\n");
    scanf("%d",&n);
    
    Arr = (int *)realloc(Arr,n*sizeof(int));

    
    printf("enter %d numbers :\n",n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("Entered %d numbers are: \n",n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\n",Arr[i]);
    }




    
    free(Arr);//step 3 
    return 0;
}