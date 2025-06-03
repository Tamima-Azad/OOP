
#include<bits/stdc++.h>
using namespace std;
class line
{
    double length;
public:
    void getlength(double a);
    double getlength();
    line();
    ~line();
};
line::line()
{
    cout<<"Object is created"<<endl;
}
line::~line()
{
    cout <<"Object is destroyed"<<endl;
}
void line:: getlength(double a) {length=a;}
double line::getlength()
{
    //cout<<"The No. is: "<<length<<endl;
    return length;
}

int main()
{
    double n;
    cin>>n;
    line line;
    line.getlength(n);
    cout<<"Length of line : "<<line.getlength()<<endl;
    return 0;
}


