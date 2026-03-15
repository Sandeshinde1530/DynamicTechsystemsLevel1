#include<stdio.h>

int main()
{
    int Price[] = {25 , 59 , 89 , 90 };

    printf("%d\n",&Price[0]);
    printf("%d\n",&Price[1]);
    printf("%d\n",&Price[2]);
    printf("%d\n",&Price[3]);


    printf("%d\n",sizeof(Price));//16
    printf("%d\n",sizeof(Price[0]));//4
    printf("%d\n",sizeof(Price[3]));//4

    return 0;
}