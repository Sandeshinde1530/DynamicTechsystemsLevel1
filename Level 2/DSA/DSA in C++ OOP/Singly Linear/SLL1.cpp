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
            head = NULL;
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
        
        }
        void InsetAtPos(int no, int iPos)
        {

        }
        void DeleteFirst()
        {

        }
        void DeleteLast()
        {

        }
        void DeleteAtPos(int iPos)
        {

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

    return 0;
}