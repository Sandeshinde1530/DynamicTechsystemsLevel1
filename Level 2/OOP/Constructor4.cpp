#include<iostream>
//copy  Constructor
using namespace std;

class Dynamics
{
    public:
        int A ;
        int B ;
    
    Dynamics(int No1  , int No2)
    {
        cout<<"Inside parametrised Constructor\n";
        A = No1;
        B = No2;
    }

    Dynamics(Dynamics &ref)
    {
        cout<<"INside Copy Constructor\n";
        A = ref.A;
        B = ref.B;
    }


    ~Dynamics()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    Dynamics dobj1(11 , 21);
    Dynamics dobj2(dobj1);

    cout<<"dobj1\n";
    cout<<dobj1.A<<endl;
    cout<<dobj1.B<<endl;

    cout<<"dobj2\n";
    cout<<dobj2.A<<endl;
    cout<<dobj2.B<<endl;



    return 0;
}

// &ref = dobj1;