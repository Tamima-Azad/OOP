#include<bits/stdc++.h>
using namespace std;
class Employee
{
    double salary;
    int day;
public:
    Employee(double x,int y)
    {
        salary=x;
        day=y;
    }
    void getinfo(double x,int y)
    {
        salary=x;
        day=y;
    }
    Employee(double x)
    {   salary=x;
        if(salary<500) salary+=10;
        cout<<"Salary+10= :"<<salary<<endl;
    }
    void Addwork()
    {
        if(day>6) salary=salary+(5*(day-6));
        cout<<"More than 6 hours per day Salary= :"<<salary<<endl;
    }
};
int main()
{
    Employee e1(0,0);
    cout<<"Enter Salary : ";
    double a;
    cin>>a;
    cout<<"Enter day : ";
    int b;
    cin>>b;
    e1.getinfo(a,b);
    Employee e2(a);
    e1.Addwork();
}
