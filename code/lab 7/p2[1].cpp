#include<bits/stdc++.h>
using namespace std;
class BankAccount
{
    int acc_num, Balance;
    string acc_name;
public:

    BankAccount()
    {
        cout << "Account Number : ";
        cin >> acc_num;
        cout << "Account Name : ";
        cin >> acc_name;
        cout << "Balance : ";
        cin >> Balance;
    }
    friend void deposite(BankAccount &, BankAccount &, int am);
    void display()
    {
        cout << "current Balance : " << Balance << endl;
    }

};
    void deposite(BankAccount &a, BankAccount &b, int amount)
    {
        if(a.Balance > amount){
            a.Balance = a.Balance - amount;
            b.Balance = b.Balance + amount;
        }
        else cout << "Deposite Not Possible.\n";
    }

int main()
{
    cout << "MY Account Info\n";
    BankAccount e1;
    cout << "\nDepositor Account Info \n";
    BankAccount e2;
    int am;
    cout << "Enter the amount : ";
    cin >> am;
    deposite(e1,e2,am);
    cout << "\nMy Account \n";
    e1.display();
    cout << "\nDepositor Account \n";
    e2.display();
}

