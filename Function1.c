#include<stdio.h>

void Display()
{
    printf("Inside Display Function\n");//2
}

void Fun()
{
    printf("Inside Fun Function\n");//4
}

int main()
{
    printf("Inside Main Function\n");//1
    
    Display();
    printf("After calling Display Function\n");//3
    
    Fun();
    printf("After calling Fun Function\n");//5


    return 0;
}


