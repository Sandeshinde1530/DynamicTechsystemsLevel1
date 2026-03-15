#include <stdio.h>
// 6 program to swap two numbers using temp variable

int main()
{
    int a = 0, b = 0;
    int temp = 0;

    printf("Enter Two Numbers\n");
    scanf("%d %d", &a, &b);

    printf("Before swap\n");
    printf("a = %d , b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap\n");
    printf("a = %d , b = %d\n", a, b);

    return 0;
}

// start
// input 2 values a , b
// create a variable as temp
// temp = a
// a = b
// b = temp;
// display
// end
