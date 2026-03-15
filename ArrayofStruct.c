#include <stdio.h>

#pragma pack(1)
struct xyz
{
    int no;
    char ch;
};

int main()
{
    struct xyz obj;
    struct xyz Arr[3];

    obj.no = 10;
    obj.ch = 'a';

    Arr[0].no = 11;
    Arr[0].ch = 'b';

    Arr[1].no = 12;
    Arr[1].ch = 'c';

    Arr[2].no = 13;
    Arr[2].ch = 'd';

    printf("obj.no : %d\n", obj.no);
    printf("obj.ch : %c\n", obj.ch);

    printf("Arr[0].no : %d\n", Arr[0].no);
    printf("Arr[0].ch : %c\n", Arr[0].ch);

    printf("Arr[1].no : %d\n", Arr[1].no);
    printf("Arr[1].ch : %c\n", Arr[1].ch);

    printf("Arr[2].no : %d\n", Arr[2].no);
    printf("Arr[2].ch : %c\n", Arr[2].ch);

    // printf("obj.no : %d\n", obj.no);
    // printf("Arr[0].no : %d\n", Arr[0].no);
    // printf("Arr[1].no : %d\n", Arr[1].no);
    // printf("Arr[2].no : %d\n", Arr[2].no);

    // printf("obj.ch : %c\n", obj.ch);
    // printf("Arr[0].ch : %c\n", Arr[0].ch);
    // printf("Arr[1].ch : %c\n", Arr[1].ch);
    // printf("Arr[2].ch : %c\n", Arr[2].ch);

    printf("%d\n", sizeof(obj));
    return 0;
}