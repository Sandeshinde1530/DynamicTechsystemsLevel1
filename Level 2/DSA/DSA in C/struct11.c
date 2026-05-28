#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Insert(struct node **head, int no)
{
    struct node *newn = NULL;
    struct node *temp = NULL;

    newn = ( struct node *)malloc(sizeof(struct node));
    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        temp = *head;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;

    }
}

void Display(struct node **head)
{
    struct node *temp = *head;

    while(temp != NULL)
        {
            printf("| %d |->",temp->data);
            temp = temp->next;
        }
        printf("| NULL |\n");
}

int main()
{

    struct node *first = NULL;

    Insert(&first , 11);
    Insert(&first , 21);
    Insert(&first , 31);
    Insert(&first , 41);
    Insert(&first , 51);


    Display(&first);


    return 0;
}