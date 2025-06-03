#include<bits/stdc++.h>
using namespace std;
class BankEmployee;
class Bank;
class Customer
{
    int ID;string name;float balance;
public:
    Customer()
    {
        cout<<"Enter Customer ID: "; cin>>ID;
        cout<<"Enter Customer Name: ";cin>>name;
        cout<<"Enter Customer balance: ";cin>>balance;
    }
    void deposit(float fund)
    {
        cout<<"After deposit funds Customer's balance: "<<balance-fund<<endl;
    }
    void withdraw()
    {
        float fund;
        cout<<"Enter withdraw funds: ";cin>>fund;
    }
    friend void add_balance(Customer,Bank);
    friend void withdraw_money(Customer,Bank);
    friend void display(Customer,BankEmployee);
};
class Bank
{
    public:
    void add_balance()
    {

    }
    void withdraw_money()
    {

    }
    friend class BankEmployee;
};
class BankEmployee
{
public:
    friend void display(Customer,BankEmployee);
};
void display(Customer c, BankEmployee e)
{
    cout<<"Customer ID: "<<c.ID<<endl;
    cout<<"Customer name: "<<c.name<<endl;
    cout<<"Customer balance: "<<c.balance<<endl;
}
int main()
{
    Customer c;
    cout<<"Enter fund to deposit: ";float fund;cin>>fund;
    c.deposit(fund);
    c.withdraw();

    Bank b;
    b.add_balance();
    b.withdraw_money();

    BankEmployee e;
    display(c,e);
}
