#include<iostream>

using namespace std;

struct node 
{
    int data;
    struct node* prev;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


class DoublyLinear
{
    public:
        PNODE head;
        int iCount;

        DoublyLinear()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = no;
            newn->prev = NULL;
            newn->next = NULL;
            
            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                head->prev = newn;
                head = newn;
            }
            iCount++;
        }
        void InsertLast(int no)
        {
            PNODE newn = NULL;
            newn = new NODE;

            newn->data = no;
            newn->prev = NULL;
            newn->next = NULL;
            
            if(head == NULL)
            {
                head = newn;
            }
            else if(head->next == NULL)
            {
                newn->prev = head;
                head->next = newn;
            }
            else
            {
                PNODE temp = head;
                while(temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newn;
                newn->prev = temp;
            }
            iCount++;

        }
        void InsertAtPos(int no , int iPos)
        {
            if(iPos<1 || iPos > iCount + 1)
            {
                cout<<"Invalid Position\n";
                return;
            }
            else if(iPos == 1)
            {
                InsertFirst(no);
            }
            else if(iPos == iCount + 1)
            {
                InsertLast(no);
            }
            else
            {
                PNODE temp = head;
                PNODE newn = NULL;
                newn = new NODE;

                newn->data = no;
                newn->prev = NULL;
                newn->next = NULL;

                for (int i = 1 ; i < iPos - 1 ; i++)
                {
                    temp = temp->next;
                }
                newn->next =  temp->next;
                temp->next->prev = newn; // newn->next->prev = newn;
                newn->prev = temp;
                temp->next = newn;
                iCount++;
            }
        }

        void DeleteFirst()
        {
            if(head == NULL)
            {
                cout<<"LL is empty"<<endl;
                return;
            }
            else if(head->next == NULL)
            {
                delete head ;
                head = NULL;
            }
            else
            {
                head = head->next;
                delete head->prev;
                head->prev = NULL;
            }
            iCount--;
        }
        void DeleteLast()
        {
             if(head == NULL)
            {
                cout<<"LL is empty"<<endl;
                return;
            }
            else if(head->next == NULL)
            {
                delete head ;
                head = NULL;
            }
            else
            {
               PNODE temp = head;

               while(temp->next->next != NULL)
               {
                temp = temp->next;
               }
               delete temp->next;
               temp->next = NULL;
            }
            iCount--;
        }
        void DeleteAtPos(int iPos)
        {
             if(iPos< 1 || iPos > iCount)
            {
                cout<<"Invalid Position\n";
                return;
            }
            else if(iPos == 1)
            {
                DeleteFirst();
            }
            else if(iPos == iCount)
            {
                DeleteLast();
            }
            else
            {
                PNODE temp = head;
                PNODE target = NULL;

                for (int i = 1 ; i < iPos - 1 ; i++)
                {
                    temp = temp->next;
                }
                target =  temp->next;
                 temp->next = target->next ;
                 target->next->prev = temp;
                 free(target);    
                 iCount--;
            }
            
        }

        void Display()
        {
            PNODE temp1 = head;
            PNODE temp2 = NULL;

            cout<<"In Forward Manner"<<endl;

            while(temp1 != NULL)
            {
                if(temp1->next == NULL)
                {
                    temp2 = temp1;
                }
                cout<<"| "<<temp1->data<<" |<=>";
                temp1 = temp1->next;
            }
            cout<<"NULL"<<endl;
            
            cout<<"In Backward Manner"<<endl;
            
            while(temp2 != NULL)
            {
                cout<<"| "<<temp2->data<<" |<=>";
                temp2 = temp2->prev;
            }
            cout<<"NULL"<<endl;
        }

        int Count()
        {
            return iCount;
        }

};

int main()
{
    DoublyLinear dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Count is:"<<iRet<<endl;
    
    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Count is:"<<iRet<<endl;

    dobj.InsertAtPos(71 , 4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Count is:"<<iRet<<endl;
    
    dobj.DeleteAtPos( 4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Count is:"<<iRet<<endl;
    
    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Count is:"<<iRet<<endl;

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Count is:"<<iRet<<endl;


    return 0;
}