#include<iostream>

using namespace std;

class BankAccount
{
    public:
       const int Acc_No ;
        int Acc_Balance;

        BankAccount(int No , int Bal): Acc_No(No)
        {
            // Acc_No = No;
            Acc_Balance = Bal;
        }

        void Display() const
        {
            // Acc_No++;
            // Acc_Balance++;
            cout<<"Account Number :"<<Acc_No<<endl;
            cout<<"Account Balance :"<<Acc_Balance<<endl;
        }

        void withdraw(int Amt)
        {
            Acc_Balance = Acc_Balance - Amt;
        }
};

int main()
{
    BankAccount bobj(123 , 1000);
     const BankAccount Freezed(124 , 500);

    bobj.Display();
    bobj.withdraw(100);
    bobj.Display();

    Freezed.Display();
    // Freezed.withdraw(100);
    Freezed.Display();

    return 0;
}