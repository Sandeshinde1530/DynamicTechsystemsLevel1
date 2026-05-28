#include<iostream>

using namespace std;

int main()
{
    int No1 = 10;
    const int No2 = 20;


    No1++;//Allowed
    No2++;// Not Allowed

    No1 = 15; // Allowd
    No2 = 25;//NA

    return 0;
}