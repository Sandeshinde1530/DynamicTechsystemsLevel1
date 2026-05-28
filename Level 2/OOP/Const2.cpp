#include<iostream>

using namespace std;

class Demo
{
    public:
        int No1 , No2 ;
        const int No3 ;
        const int No4 ;


        Demo() : No3(30) , No4(40)
        {
            No1 = 10;
            No2 = 20;
            // No3 = 30;
            // No4 = 40;
        }

        Demo( int A , int B , int C, int D): No3(C) , No4(D)
        {
            No1 = A;
            No2 = B;
        }

};

int main()
{
    Demo dobj;
    Demo dobj2(11,21,31,41);

    cout<<"The values of  dobj"<<endl;
    cout<<dobj.No1<<endl;
    cout<<dobj.No2<<endl;
    cout<<dobj.No3<<endl;
    cout<<dobj.No4<<endl;

    // dobj2.No3++;

    cout<<"The values of  dobj2"<<endl;
    cout<<dobj2.No1<<endl;
    cout<<dobj2.No2<<endl;
    cout<<dobj2.No3<<endl;
    cout<<dobj2.No4<<endl;


    return 0;
}