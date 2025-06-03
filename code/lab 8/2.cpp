
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

        cin>>ID;
        cin>>Name;
        cin>>Grade;
    }
    friend void displayStudentInfo(Student obj);

};
void displayStudentInfo(Student obj)
{
        cout<<"ID : "<<obj.ID<<endl;
        cout<<"Name : "<<obj.Name<<endl;
        cout<<"Grade : "<<obj.Grade<<endl;
    }
int main()
{
    int n;
    cin>>n;

    Student obj[n];
    for(int i=0;i<n;i++){

        displayStudentInfo(obj[i]);
    }
}
