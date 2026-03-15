#include<iostream>
//parameterised  Constructor
using namespace std;

class Dynamics
{
    public:
        int A ;
        int B ;

    Dynamics()
    {
        cout<<"Inside Default Constructor\n";
        A = 0;
        B = 0;
    }
    
    Dynamics(int No1  , int No2)
    {
        cout<<"Inside parametrised Constructor\n";
        A = No1;
        B = No2;
    }

    void Fun()
    {
        cout<<"Inside Fun Function\n";
    }

    ~Dynamics()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    Dynamics dobj1;
    Dynamics dobj2(10,20);

    cout<<"Dobj1\n";
    cout<<dobj1.A<<endl;
    cout<<dobj1.B<<endl;
    
    cout<<"Dobj2\n";
    cout<<dobj2.A<<endl;
    cout<<dobj2.B<<endl;

    return 0;
}