#include<iostream>
//default Constructor
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
    Dynamics dobj;

    cout<<dobj.A<<endl;
    cout<<dobj.B<<endl;

    cout<<sizeof(dobj)<<endl;

    return 0;
}