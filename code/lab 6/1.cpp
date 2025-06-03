#include<bits/stdc++.h>
using namespace std;
class X
{
    int a;
    int b;
public:
    void getdata(int m, int n)
    {
        a=m;
        b=n;
    }
    void putdata()
    {
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    void operator ++ ()
    {
        a=a+1;
        b=b-1;

    }
};
int main()
{
    int p,q;
    cin>>p>>q;
    X xx;
    xx.getdata(p,q);
    xx.putdata();
    ++xx;
    xx.putdata();
    return 0;

}
