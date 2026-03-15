#include<iostream>

using namespace std;

class Demo
{
    public:
        int A;
        int B;

        Demo()
        {
            cout<<"Inside Demo Constructor\n";
            A = 10;
            B = 20;
        }
        
        void fun()
        {
            cout<<"Inside Fun Function\n";
        }

        void Gun()
        {
            cout<<"Inside Gun Function\n";
        }

        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }
};

int main()
{
    Demo obj;
    Demo obj2;

    cout<<obj.A<<endl;
    cout<<obj.B<<endl;

    cout<<obj2.A<<endl;
    cout<<obj2.B<<endl;
    return  0;
}