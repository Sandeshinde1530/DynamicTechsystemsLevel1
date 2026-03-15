#include<iostream>

using namespace std;

class Demo
{
    public:
        int A;
    private:
        int B;
    public:
        Demo()
        {
            A = 20;
            B = 30;
        }

        void fun()
        {
            cout<<"INside fun fucntion A :"<<A<< endl;
            cout<<"INside fun fucntion B:"<<B<< endl;
        }
};

int main()
{
    Demo dobj;

    cout<<dobj.A<<endl; // Allowed
    cout<<dobj.B<<endl; // Not Allowed

    dobj.fun();// Allowed

    return 0 ;
}