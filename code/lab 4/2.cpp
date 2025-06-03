#include<bits/stdc++.h>
#include<string>
using namespace std;
class student
{
    int rno;
    string name;
    double fee;
public:
    student();
    void display();
};
student::student()
{
    cout<<"Enter the Roll No: ";
    cin>>rno;
    cout<<"Enter the Name: ";
    getline(cin>> ws,name);
    cout<<"Enter the fee: ";
    cin>>fee;
}
void student:: display()
{
    cout<<" Roll: "<<rno<<" Name: "<<name<<" fee: "<<fee;
}
int main()
{
    student obj;
    obj.display();
}
