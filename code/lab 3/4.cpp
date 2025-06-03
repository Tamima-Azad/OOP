
#include<bits/stdc++.h>
using namespace std;
class ABC;
class XYZ
{
    int x;
public:
    void setValue(int a)
    {
    x=a;
    }
    friend void max(XYZ,ABC);

};
class ABC
{
    int x;
public:
    void setValue(int a){ x=a;}
    friend void max(XYZ,ABC);
};
void max (XYZ y,ABC b)
{
    if(y.x>b.x) cout <<"Max= "<<y.x;
    else if (y.x<b.x) cout<<"Max= "<<b.x;
    else cout<<"Two numbers are equal";
}
int main()
{
    ABC b;
    XYZ y;
    int m,n;
    cin>>m>>n;
    y.setValue(m);
    b.setValue(n);
    max(y,b);
}


