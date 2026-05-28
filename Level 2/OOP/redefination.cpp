#include<iostream>

using namespace std;

class Base
{
    public:
        void Fun() //  defination
        {
            cout<<"Inside Base Fun"<<endl;
        }
};
class Derived : public Base
{
    public:
        void Fun() // redefination
        {
            cout<<"Inside Derived Fun"<<endl;
        }
};

int main()
{ 
    Base bobj;
    Derived dobj;
    

    bobj.Fun();
    dobj.Fun();

    cout<<sizeof(bobj)<<endl;//1byte
    cout<<sizeof(dobj)<<endl;//1byte

    return 0;
}