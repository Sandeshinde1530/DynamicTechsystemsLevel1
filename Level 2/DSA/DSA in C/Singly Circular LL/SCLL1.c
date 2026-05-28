#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head , PPNODE tail , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))// case 1 LL is empty
    {
        *head = newn;
        *tail = newn;
        (*tail)->next = *head;
    }
    else
    {
        newn->next = *head;
        *head = newn;
        (*tail)->next = *head;
    }
}

void InsertLast(PPNODE head , PPNODE tail , int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if((*head == NULL) && (*tail == NULL))// case 1 LL is empty
    {
        *head = newn;
        *tail = newn;
        (*tail)->next = *head;
    }
    else if(*head == *tail) //Case 2 LL have only one node
    {
        (*head)->next = newn;
        *tail = newn;
        (*tail)->next = *head;
        
    }
    else// Case 3 LL have more than one node 
    {
        (*tail)->next = newn;
        *tail = newn;
        (*tail)->next = *head;
    }
}


int main()
{
    PNODE first = NULL;
    PNODE last = NULL;


    return 0;
}