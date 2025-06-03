#include<bits/stdc++.h>
using namespace std;
class X
{
    int a;
    //int b;
public:
    void getdata(int m)
    {
        a=m;
        //b=n;
    }
    void putdata()
    {
        cout<<"a= "<<a<<endl;
    }
    friend X operator ++ (X aa);

};
X operator ++ (X aa )
{
        X y;
        y.a=aa.a+1;
       // y.b=aa.b-1;
    }
int main()
{
    int p,q;
    cin>>p>>q;
    X xx,yy;
    xx.getdata(p);
    xx.putdata();
    xx=++xx;
    xx.putdata();
    return 0;
}

