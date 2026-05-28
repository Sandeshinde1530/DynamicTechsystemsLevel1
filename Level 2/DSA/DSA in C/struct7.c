#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    // struct node obj; static memory allocation

    // Dynamic Memory allocation    

    // struct node obj1;
    // struct node *ptr;
    // ptr = &obj1;


    struct node *node1 =(struct node*) malloc(sizeof(struct node));

    node1->data = 11;
    node1->next = NULL;

    struct node *node2 = (struct node*)malloc(sizeof(struct node));
    node2->data = 21;
    node2->next = NULL;

    node1->next = node2;

    printf("%d\t",node1->data);
    printf("%d\t",node2->data);
    printf("%d\t",node1->next->data);


    free(node1);
    free(node2);

    return 0;
}





