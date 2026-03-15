#include<iostream>

using namespace std;


class Base
{
    public:
        int i , j;

        Base()
        {
            cout<<"Inside Base Constructor\n";
            i = 10;
            j = 20;
        }

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }

        ~Base()
        {
            cout<<"Inside  Base Destructor\n";
        }
};

class Derived : public Base
{
    public:
        int x;
        int y;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
            x = 30;
            y = 40;
        }

        void Gun()
        {
            cout<<"inside derived Gun Function\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }
};

int main()
{
    // Base bobj;
    Derived dobj;

    // cout<<sizeof(bobj)<<endl;
    cout<<sizeof(dobj)<<endl;

    cout<<dobj.i<<endl;
    cout<<dobj.j<<endl;
    cout<<dobj.x<<endl;
    cout<<dobj.y<<endl;

    dobj.fun();
    dobj.Gun();
    return 0;
}