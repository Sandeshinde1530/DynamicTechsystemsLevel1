#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *node1 =(struct node*) malloc(sizeof(struct node));

    node1->data = 11;
    node1->next = NULL;

    struct node *node2 = (struct node*)malloc(sizeof(struct node));
    node2->data = 21;
    node2->next = NULL;

    struct node *node3 = (struct node*)malloc(sizeof(struct node));
    node3->data = 31;
    node3->next = NULL;

    struct node *node4 = (struct node*)malloc(sizeof(struct node));
    node4->data = 41;
    node4->next = NULL;

    struct node *node5 = (struct node*)malloc(sizeof(struct node));
    node5->data = 51;
    node5->next = NULL;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;


    printf("%d\t",node1->data);
    printf("%d\t",node1->next->data);
    printf("%d\t",node1->next->next->data);
    printf("%d\t",node1->next->next->next->data);
    printf("%d\t",node1->next->next->next->next->data);



    free(node1);
    free(node2);

    return 0;
}





