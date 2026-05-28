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

int Count(PNODE head)
{
    int iCount = 0;

    while(head != NULL)
    { 
        iCount++;
        head = head->next;
    }
    return iCount;
}

void DeleteFirst(PPNODE head)
{
    if(*head == NULL) // LL is empty
    {
        return;
    }
    else if((*head)->next == NULL) // LL contains one node
    {
        free(*head);
        *head = NULL;
    }
    // else // LL contains more than one node
    // {
    //     PNODE temp = *head;

    //     *head = (*head)->next;
    //     free(temp);
    //     (*head)->prev = NULL;
    // }
    else // LL contains more than one node
    {
        *head = (*head)->next ;
        free(*head->prev);
        *head->prev = NULL;
    }
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

    DeleteFirst(&first );
    Display(first);
    iRet = Count(first);
    printf("Count is %d\n",iRet);

    return 0;
}