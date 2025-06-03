#include<bits/stdc++.h>
using namespace std;
class employee
{
    int id;
    int salary;
    void bonus(int v);

public:
    void getdata(int a,int b);
    void display(void){
    cout<<"Id= "<<id<<" "<<"salary= "<<salary<<endl;
    }
};
void employee::getdata(int a,int b)
{
    id=a;
    salary=b;
    bonus(b);

}
int  employee::bonus(int x)
{
    if(x>=5000&&x<=10000){
        return x=x+2000;
        //cout<<"bonus= "<<x<<endl;
    }
    else if(x>=110000&&x<=20000){
        return x=x+3000;
        //cout<<"bonus= "<<x<<endl;
    }
    else if(x>20000){
        return x=x+5000;
        //cout<<"bonus= "<<x<<endl;
    }
}
int main()
{
    employee e1;
    int a,b,y;
    cin>>a>>b;
    e1.getdata(a,b);
    e1.display();
    y=e1.bonus(int x);
    cout<<y<<endl;
}
