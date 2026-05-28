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


void InsertFirst(PPNODE head , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}


void InsertLast(PPNODE head , int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)
    {
        *head = newn;
    }
    else if((*head)->next == NULL)
    {
        (*head)->next = newn;
    }
    else
    {
        PNODE temp = *head;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE head )
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else if((*head)->next == NULL)
    {
        temp = *head;
        *head = NULL;
        free(temp);
    }
    else
    {
        temp = *head;
        *head = temp->next; // *head = *head->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head )
{
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }   
    else if((*head)->next == NULL)
    {
        temp = *head;
        *head = NULL;
        free(temp);
    }
    else
    {
        temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void Display(PNODE head)
{
    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head = head->next;
    }
    printf("NULL\n");
}

    
int Count(PNODE head)
{
    int iCount  = 0;
    while(head != NULL)
    {
       iCount++;
       head = head->next;
    }
    return iCount;
}



int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first , 51);
    InsertFirst(&first , 21);
    InsertFirst(&first , 11);
    Display(first);
    iRet = Count(first);
    printf("Count is %d\n",iRet);

    InsertLast(&first , 101);
    InsertLast(&first , 111);
    InsertLast(&first , 121);
    Display(first);
    iRet = Count(first); 
    printf("Count is %d\n",iRet);

    DeleteFirst(&first);
    Display(first);
    iRet = Count(first);
    printf("Count is %d\n",iRet);

    DeleteLast(&first);
    Display(first);
    iRet = Count(first);
    printf("Count is %d\n",iRet);
    
    return 0;
}