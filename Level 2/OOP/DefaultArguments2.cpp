#include<iostream>

using namespace std;

void Display(int a  = 11 , int b = 21  , int c = 31  ,int d = 41)  
{
    cout<<a<<"\t";
    cout<<b<<"\t";
    cout<<c<<"\t";
    cout<<d<<endl;
}

int main()
{
    Display();              // 11 21    31 41
    Display( 99 , 98);      //99    98  31  41
    Display( 1 , 26 , 29);  //1 26  29  41
    Display(10,20,30,40);   // 10 20 30 40

    return 0;
}