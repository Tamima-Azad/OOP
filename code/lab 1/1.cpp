#include<bits/stdc++.h>
using namespace std;
class person
{
    string name;
    int age;
public:
    void getdata(void);
    void putdata(void)
    {
        cout<<"name: "<<name<<" "<<"age: "<<age;
    }
};
void person ::getdata(void)
{
    cin>>name>>age;
}
int main()
{
    person p;
    p.getdata();
    p.putdata();
}
