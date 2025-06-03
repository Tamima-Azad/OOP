#include<bits/stdc++.h>
using namespace std;
class Employee
{
   public:
    int id;
    float salary;
    Employee(int iid)
    {
        id=iid;
        salary=34.0;
    }
    Employee(){}
};
class programmer: public Employee
{
public:
    int languageCode;
    programmer(int iid){
        id=iid;
        languageCode=9;
        }
    void getData(){
        cout<<id<<" "<<endl;}
};
int main()
{
    Employee e1(60),e2(70);
    cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;
    programmer p1(33);
    cout<<p1.languageCode<<endl;
    cout<<p1.id<<endl;
    p1.getData();
}

