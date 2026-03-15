#include <stdio.h>

#pragma pack(1)
struct ABC
{
    char ch;
    char *c;
    char *p;
};

int main()
{
    struct ABC obj;
    char Alpha1 = 'A';
    char Alpha2 = 'B';

    obj.ch = 'Z';
    obj.c = &Alpha1;
    obj.p = &Alpha2;

    printf("Accessing value using object\n");
    printf("%c\n", obj.ch);
    printf("%c\n", *(obj.c));
    printf("%c\n", *(obj.p));

    struct ABC *ptr = &obj;
    printf("Accessing values using structures pointer\n");
    printf("%c\n", ptr->ch);
    printf("%c\n", *(ptr->c));
    printf("%c\n", *(ptr->p));

    // printf("%c\n", Alpha1);
    // printf("%c\n", Alpha2);

    // printf("sizeof obj : %d\n", sizeof(obj));

    return 0;
}
