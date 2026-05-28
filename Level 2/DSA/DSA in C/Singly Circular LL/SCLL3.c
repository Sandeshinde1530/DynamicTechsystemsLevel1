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
        // (*tail)->next = *head;
    }
    else
    {
        newn->next = *head;
        *head = newn;
        // (*tail)->next = *head;
    }
    
    (*tail)->next = *head;

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
        // (*tail)->next = *head;
    }
    // else if(*head == *tail) //Case 2 LL have only one node
    // {
    //     (*head)->next = newn;
    //     *tail = newn;
    //     (*tail)->next = *head;
        
    // }
    else// Case 3 LL have more than one node 
    {
        (*tail)->next = newn;
        *tail = newn;
        // (*tail)->next = *head;
    }
    (*tail)->next = *head;
}

void DeleteFirst(PPNODE head ,  PPNODE tail)
{
    if(*head == NULL && *tail == NULL)
    {
        printf("LL is empty\n");
        return ;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
         *head = (*head)->next;
         free((*tail)->next);
         (*tail)->next = *head;
    }
}


void DeleteLast(PPNODE head ,  PPNODE tail)
{
    if(*head == NULL && *tail == NULL)
    {
        printf("LL is empty\n");
        return ;
    }
    else if(*head == *tail)
    {
        free(*head);
        *head = NULL;
        *tail = NULL;
    }
    else
    {
        PNODE temp = *head;
        while(temp->next != *tail)
        {
            temp = temp->next;
        }
        free(*tail); // free(temp->next);
        *tail = temp;
        (*tail)->next = *head;
         
    }
}

void Display(PNODE head , PNODE tail)
{

    do
    {
        printf("| %d |->",head->data);
        head = head->next;
    }while(head !=  (tail->next));
    printf("\n");  
}

int Count(PNODE head , PNODE tail)
{
    int iCount = 0;

    do
    {
        iCount++;
        head = head->next;
    }while(head !=  (tail->next));

   return iCount; 
}


int main()
{
    PNODE first = NULL;
    PNODE last = NULL;
    int iRet = 0;

    InsertFirst(&first , &last , 51);
    InsertFirst(&first , &last , 21);
    InsertFirst(&first , &last , 11);
    Display(first , last);
    iRet = Count(first , last); 
    printf("Count is :%d\n" , iRet);
    
    InsertLast(&first , &last , 101);
    InsertLast(&first , &last , 111);
    InsertLast(&first , &last , 121);
    Display(first , last);
    iRet = Count(first , last);
    printf("Count is :%d\n" , iRet);

    DeleteFirst(&first , &last );
    Display(first , last);
    iRet = Count(first , last);
    printf("Count is :%d\n" , iRet);

    DeleteLast(&first , &last );
    Display(first , last);
    iRet = Count(first , last);
    printf("Count is :%d\n" , iRet);


    return 0;
}