#include<iostream>

using namespace std;

struct node 
{
    int data;
    struct node* prev;
    struct node* next;
};

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
        {}
        void InsertLast(int no)
        {}
        void InsertAtPos(int no , int iPos)
        {}

        void DeleteFirst()
        {}
        void DeleteLast()
        {}
        void DeleteAtPos(int iPos)
        {}

        void Display()
        {}

        int Count()
        {}

}

int main()
{


    return 0;
}