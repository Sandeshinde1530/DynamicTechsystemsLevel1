#include<iostream>

using namespace std;

class Base
{
    public:
        int A,B;
        void Fun() //  defination
        {
            cout<<"Inside Base Fun"<<endl;
        }
};
class Derived : public Base
{
    public:
        int x,y;
        void Fun() // redefination
        {
            cout<<"Inside Derived Fun"<<endl;
        }
};

int main()
{ 
    Base bobj;
    cout<<sizeof(bobj)<<endl; // 8bytes
    bobj.Fun();


    Derived dobj;
    cout<<sizeof(dobj)<<endl;// 16byte
    dobj.Fun();

    Base *bptr = NULL;
    Derived *dptr = NULL;

    bptr = &bobj; //No Casting
    dptr = &dobj; // No Casting

    bptr = &dobj; //upcasting
    dptr = &bobj;//downcasting ERROR

    return 0;
}