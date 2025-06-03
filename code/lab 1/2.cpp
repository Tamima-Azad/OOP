#include<bits/stdc++.h>
using namespace std;
class person
{
    string name;
    int age;
public:
    void getdata(string a,int b);
    void putdata()
    {
        cout<<"name: "<<name<<" "<<"age: "<<age<<endl;
    }
};
void person ::getdata(string a,int b)
{
    name=a;
    age=b;
}
int main()
{
    person p,q;
    string x;
    int y;
    cin >>x;
    cin>>y;
    p.getdata(x,y);
    p.putdata();
    q.getdata(x,y);
    q.putdata();
}

