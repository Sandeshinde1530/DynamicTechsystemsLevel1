#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCount;

        SinglyLL()
        {
            head =   NULL;
            iCount = 0;
        }

        void InsertFirst( int no)
        {
            PNODE newn = NULL;

            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                newn->next = head;
                head = newn;
            }
            iCount++;
        }
        void InsertLast(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else if(head->next == NULL)
            {
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
            }
            iCount++;

        }
        void InsertAtPos(int no, int iPos)
        {
            if(iPos < 1 || iPos > iCount + 1)
            {
                cout<<"Invalid Position"<<endl;
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
                newn->next = NULL;

                for(int i = 1 ; i < iPos - 1 ; i++)
                {
                    temp = temp->next;
                }
                newn->next = temp->next;
                temp->next = newn;
                iCount++;
            }


        }
        void DeleteFirst()
        {
            if(head == NULL)
            {
                cout<<"LL is empty\n";
                return;
            }
            else if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                PNODE temp = head;
                head = temp->next;
                delete temp;
            }
            iCount--;

        }
        void DeleteLast()
        {
            if(head == NULL)
            {
                cout<<"LL is empty\n";
                return;
            }
            else if(head->next == NULL)
            {
                delete head;
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
             if(iPos < 1 || iPos > iCount )
            {
                cout<<"Invalid Position"<<endl;
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

                for(int i = 1 ; i < iPos - 1 ; i++)
                {
                    temp = temp->next;
                }
                target = temp->next;
                temp->next = target->next;
                delete target;
                iCount--;
            }

        }
        void Display()
        {
            PNODE temp = head;

            while(temp != NULL)
            {
                cout<<"|"<<temp->data<<"|->";
                temp = temp->next;
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
    SinglyLL sobj1;
    int iRet = 0;

    // cout<<sizeof(sobj1)<<endl;  

    sobj1.InsertFirst(51);
    sobj1.InsertFirst(21);
    sobj1.InsertFirst(11);
    sobj1.Display();
    iRet = sobj1.Count();
    cout<<"count is :"<<iRet<<endl;

    sobj1.InsertLast(101);
    sobj1.InsertLast(111);
    sobj1.InsertLast(121);
    sobj1.Display();
    iRet = sobj1.Count();
    cout<<"count is :"<<iRet<<endl;

    sobj1.InsertAtPos(71 , 4);
    sobj1.Display();
    iRet = sobj1.Count();
    cout<<"count is :"<<iRet<<endl;

    sobj1.DeleteAtPos(5);
    sobj1.Display();
    iRet = sobj1.Count();
    cout<<"count is :"<<iRet<<endl;

    sobj1.DeleteFirst();
    sobj1.Display();
    iRet = sobj1.Count();
    cout<<"count is :"<<iRet<<endl;

    sobj1.DeleteLast();
    sobj1.Display();
    iRet = sobj1.Count();
    cout<<"count is :"<<iRet<<endl;

    return 0;
}