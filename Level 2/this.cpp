#include<iostream>

using namespace std;

class Demo
{
    public:
        int No1,No2 ;

        Demo(int A,int B)
        {
            No1 = A;
            No2 = B;
        }

        void Display(int x)
        {
            cout<<"Value of No1:"<<No1<<endl;
            cout<<"Value of No2:"<<No2<<endl;
            cout<<"Value of x:"<<x<<endl;
        }
};

int main()
{
    Demo dobj(10,20);


    Demo newobj(50,60);
    newobj.Display(70); // Display (&newobj , 70)

    return 0;
}