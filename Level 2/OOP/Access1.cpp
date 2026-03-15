#include<iostream>

using namespace std;

class Base
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;

    public:
        Base()
        {
            A = 10;
            B = 20;
            C = 30;
        }
        
        void Fun()
        {
            cout<<"A:"<<A<<endl;//Allowed
            cout<<"B:"<<B<<endl;//Allowed
            cout<<"C:"<<C<<endl;//Allowed
        }

};

class Derived : public Base
{
    public:
        int i;

        Derived()
        {
            i = 101;
        }

        void gun()
        {            
            cout<<i<<endl;          //Allowed
            cout<<A<<endl;          ////Allowed
            // cout<<B<<endl;      //Not Allowed private
            cout<<C<<endl;         //Allowed protected
        }


};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<sizeof(bobj)<<endl;
    cout<<sizeof(dobj)<<endl;
    cout<<bobj.A<<endl;
    // cout<<bobj.B<<endl;      Not Allowed private
    // cout<<bobj.C<<endl;      Not Allowed protected


    dobj.Fun();
    dobj.gun();

    return 0;
}