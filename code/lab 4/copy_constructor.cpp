#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class student
{
public:
    int roll,mark;
    student()
    {
        roll=0;
        mark=0;
    }
    student(int r,int m)
    {
        roll=r;
        mark=m;
    }
    void display()
    {
        cout<<roll<<" "<<mark<<endl;
    }
    student(student &t)
    {
        roll=t.roll;
        mark=t.mark;
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    student x,y(n,m);
    x.display();
    y.display();
    student z(y);
    z.display();
}
