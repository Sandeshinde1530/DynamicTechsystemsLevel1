#include<iostream>

using namespace std;

int main()
{
     int No = 21;
     int &A = No;

     cout<<No<<endl;
     cout<<A<<endl;

     cout<<&No<<endl;
     cout<<&A<<endl;


    return 0;
}