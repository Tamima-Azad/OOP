#include<bits/stdc++.h>
using namespace std;
class BankAccount
{
    int number,balance;
    string name;
public:
    BankAccount(int no,string nam,int blnc)
    {
        number=no;
        name=nam;
        balance=blnc;
    }
    void withdraw(int fund)
    {
       if(balance>=fund) balance=balance-fund;
       else fund=0;
    }
    friend void transfer(BankAccount p1,BankAccount p2,int fund);

};
void transfer(BankAccount p1,BankAccount p2,int fund)
{
    p2.balance=p2.balance+fund;
    cout<<"My Current balance: "<<p1.balance<<endl;
    cout<<"Another's Current balance: "<<p2.balance<<endl;
}
int main()
{
    int no,balance;
    string nam;
    cout<<"My Account No,Name & Balance: "<<endl;
    cin>>no>>nam>>balance;
    BankAccount p1(no,nam,balance);
    int no1,b1;
    string nam1;
    cout<<"Another Account No,Name,& Balance: "<<endl;
    cin>>no1>>nam1>>b1;
    BankAccount p2(no1,nam1,b1);
    int fund;
    cout<<"Enter fund: "<<endl;
    cin>>fund;
    p1.withdraw(fund);
    transfer(p1,p2,fund);

}
