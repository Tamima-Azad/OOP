#include<bits/stdc++.h>
using namespace std;
class Student
{
    static int Count;
    string ID, Name;
    float Gpa;
public:
    Student()
    {
        Count++;
        cout << "Student " << Count << " : ";
        cout << "\nEnter ID : ";
        cin >> ID;
        cout << "Enter Name : ";
        cin >> Name;
        cout << "Enter Gpa : ";
        cin >> Gpa;
    }
    friend void displayStudentInfo(Student &obj);
};
int Student :: Count = 0;
void displayStudentInfo(Student &obj)
{
    cout << "ID : " << obj.ID << "\nName : " << obj.Name << "\nGpa : " << obj.Gpa << "\n\n";
}
int main()
{
    cout << "Total Student : ";
    int sz;
    cin >> sz;
    Student obj[sz];
    for(int i=0;i<sz;i++){
        displayStudentInfo(obj[i]);
    }

}

