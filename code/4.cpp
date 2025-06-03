#include<bits/stdc++.h>
using namespace std;
class person
{
    int id;
    string name;
public:
    void getdata(int a,string b)
    {

        id=a;
        name=b;
    }
    void putdata()
    {
        cout<<"ID: "<<id<<" name: "<<name<<endl;
    }

};
class student:private person
{
    string course;
    int fee;
    public:
    void getdata(string a,int b)
    {
       course=a;
       fee=b;
    }
    void putdata()
    {
       cout<<course<<" "<<fee<<endl;
    }
};
int main()
{
    person p;
    student s;
    int y;
    string c;
    cout<<"Enter course && fee: "<<endl;
    cin>>c>>y;
    s.getdata(c,y);
    s.putdata();
    int id;
    string name;
    cout<<"Enter Id & Name: "<<endl;

    cin>>id>>name;
    p.getdata(id,name);
    p.putdata();


}
