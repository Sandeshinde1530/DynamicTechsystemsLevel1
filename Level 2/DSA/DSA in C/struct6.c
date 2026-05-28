#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj1;
    struct node obj2;
    struct node obj3;

    obj1.data = 11;
    obj1.next = NULL;

    obj2.data = 21;
    obj2.next = NULL;

    obj3.data = 51;
    obj3.next = NULL;


    obj1.next = &obj2;
    obj2.next = &obj3;

    printf("%d\n",&obj1);//100
    printf("%d\n",&obj2);//200
    printf("%d\n",&obj3);//300
    printf("%d\n",obj1.next);//200
    printf("%d\n",obj1.next->next);//300
    printf("%d\n",obj1.next->data);//21
    printf("%d\n",obj2.next);//300
    printf("%d\n",obj2.next->data);//51
    printf("%d\n",obj2.next->next);



    return 0;
}