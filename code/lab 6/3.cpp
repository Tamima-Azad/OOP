#include<bits/stdc++.h>
using namespace std;
class X
{
    int a;
public:
    void getdata(int m)
    {
        a=m;
    }
     void putdata()
     {
         cout<<"sum = "<<a<<endl;
     }
    friend X operator +(X aa,X bb);

};
X operator + (X aa,X bb)
{
        X c;
        c.a=aa.a+bb.a;
        return c;
    }

int main()
    {
        int p,q;
        cin>>p>>q;
        X xx,yy,zz;
        xx.getdata(p);
        yy.getdata(q);
        zz=xx+yy;
        zz.putdata();

}


