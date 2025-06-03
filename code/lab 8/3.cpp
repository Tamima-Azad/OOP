#include<bits/stdc++.h>
using namespace std;
class Student
{
     int ID;
    string Name;
     float Grade;
public:
   Student()
   {
        ID=0;
        Name='0';
        Grade=0;
    }
    friend void displayStudentInfo(int a,string b,float c)
    {

        ID=a;
        Name=b;
        Grade=c;
        cout<<"ID : "<<ID<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Grade : "<<Grade<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
Student obj[n];
    int a;
    string nam;
    float b;
    for(int i=0;i<n;i++){
         cout<<"Enter ID: ";
         cin>>a;
        cout<<"Enter Name: ";
          cin>>nam;
          cout<<"Enter Grade: ";
           cin>>b;
         displayStudentInfo(obj[i](a,nam,b));
    }
}
