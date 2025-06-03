#include<bits/stdc++.h>
using namespace std;
class binary
{
    int x;
 public:
    void getdata(int a)
    {
        x=a;
    }
    void putdata()
    {
        cout <<"Sum : "<< x << endl;
    }
    binary operator+(binary bb)
    {
        binary cc;
        cc.x = x+bb.x;
        return cc;

    }
};
int main()
{
    int a;
    cin >> a ;
    binary aa,bb,cc;
    aa.getdata(a);
    cin >> a;
    bb.getdata(a);
    cc=aa+bb;
    cc.putdata();
}
