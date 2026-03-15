#include <stdio.h>

struct demo
{
    int no;
    int Arr[3];
    int no2;
};

int main()
{
    struct demo obj;

    obj.no = 10;
    obj.no2 = 20;

    obj.Arr[0] = 11;
    obj.Arr[1] = 12;
    obj.Arr[2] = 13;

    printf("size of obj: %d\n", sizeof(obj));
    printf("%d\n", obj.no);
    printf("|%d|", obj.Arr[0]);
    printf("|%d|", obj.Arr[1]);
    printf("|%d|\n", obj.Arr[2]);
    printf("%d\n", obj.no2);

    return 0;
}