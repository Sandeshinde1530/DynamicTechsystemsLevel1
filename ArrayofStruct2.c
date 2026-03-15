#include <stdio.h>

struct node
{
    int no;
    float f;
};

int main()
{
    struct node Arr[2];

    printf("Enter 2 numbers\n");
    scanf("%d %d", &Arr[0].no, &Arr[1].no);

    printf("Enter 2 float numbers\n");
    scanf("%f %f", &Arr[0].f, &Arr[1].f);

    printf("Arr[0].no = %d\n", Arr[0].no);
    printf("Arr[0].f = %.3f\n", Arr[0].f);

    printf("Arr[1].no = %d\n", Arr[1].no);
    printf("Arr[1].f = %.2f\n", Arr[1].f);

    return 0;
}
