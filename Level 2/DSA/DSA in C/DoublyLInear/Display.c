#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head ,  int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->prev = NULL;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        (*head)->prev = newn;
        *head = newn;
    }
}

void InsertLast(PPNODE head ,  int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->prev = NULL;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        PNODE temp = *head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
}

void Display(PNODE head)
{

    PNODE temp = NULL;

    printf("in forward manner\n");
    
    printf("NULL");
    
    while(head != NULL)
    {
        if(head->next == NULL)
        {
            temp = head;
        }
        printf("| %d |<=>",head->data);
        head = head->next;
    }
    printf("NULL\n");
    
    printf("in Backward manner\n");

        printf("NULL");
    
    while(temp != NULL)
    {
        printf("| %d |<=>",temp->data);  
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main()
{
    PNODE first = NULL;

    InsertFirst(&first , 51);
    InsertFirst(&first , 21);
    InsertFirst(&first , 11);
    Display(first);

    InsertLast(&first , 101);
    InsertLast(&first , 111);
    InsertLast(&first , 121);
    Display(first);



    return 0;
}