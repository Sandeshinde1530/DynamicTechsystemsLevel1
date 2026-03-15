#include<stdio.h>//standard input output header file
#include<stdlib.h>// standard Library Headerfile


int main()
{
    int *ptr = NULL;
    
    //step 1 : Allocate the memory
    ptr = (int * )calloc(5 , sizeof(int));

    //step 2 :- Use the memory
    //LOGIC

    //step3 deallocate memory
    free(ptr);

    return 0;
}