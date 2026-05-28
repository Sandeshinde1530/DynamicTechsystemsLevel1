#include<iostream>

using namespace std;

class demo
{
    public:

    int No1 , No2 , No3;

    demo(int A = 10 , int B = 20  , int C = 30)
    {
        No1 = A;
        No2 = B;
        No3 = C;

        this->Display();
    }

    void Display()
    {
        cout<<No1<<"\t";
        cout<<No2<<"\t";
        cout<<No3<<endl;
    }
};


int main()
{
    demo dobj;      //10 20 30
    demo dobj2(99,98); // 99 98 30

    return 0;
}