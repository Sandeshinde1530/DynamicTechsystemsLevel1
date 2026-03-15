#include<iostream>

using namespace std;

class Demo
{
    public:
        int A;
        int B;
        

        void fun()
        {
            cout<<"Inside Fun Function\n";
        }

        void Gun()
        {
            cout<<"Inside Gun Function\n";
        }
};

int main()
{
    Demo obj;

    obj.A = 21;
    obj.B = 11;

    obj.fun();
    obj.Gun();

    cout<<obj.A<<endl;
    cout<<obj.B<<endl;

    return  0;
}