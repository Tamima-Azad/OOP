#include<bits/stdc++.h>
using namespace std;
class employee
{
    int id;
    int salary;

public:
    void getdata(int a,int b);
    void bonus(int v);
    void display(void){

    cout<<"Id= "<<id<<" "<<"salary= "<<salary<<endl;
    }
};
void employee::getdata(int a,int b)
{
    id=a;
    salary=b;
}
void employee:: bonus( int x)
{
    if(x>=5000&&x<=10000){
        x=x+2000;
        cout<<"bonus= "<<x<<endl;
    }
    else if(x>=110000&&x<=20000){
        x=x+3000;
        cout<<"bonus= "<<x<<endl;
    }
    else if(x>20000){
        x=x+5000;
        cout<<"bonus= "<<x<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    employee e1[n];
    int a,b;
    for(int i=0;i<n;i++){
            cin>>a>>b;
        e1[i].getdata(a,b);
        e1[i].display();
    e1[i].bonus(b);
    }

}

