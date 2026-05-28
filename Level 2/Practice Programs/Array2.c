#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;
    int size = 0;

    printf("How many numbers you want to store:\n");
    scanf("%d",&size);

    Arr = (int *)malloc(size * sizeof(int));

    printf("enter %d numbers:" , size);
    
    for(int i = 0 ; i< size ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    
    printf("entered %d numbers are:" , size);
    for(int i = 0 ; i< size  ; i++)
    {
        printf("%d\n",Arr[i]);
    }

    free(Arr);
    

    return 0;
}