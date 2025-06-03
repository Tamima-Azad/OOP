#include<bits/stdc++.h>
using namespace std;
class ABC
{
    int x;
public:
    void getdata(int a)
    {
        x=a;
    }
    friend ABC operator +(ABC a,ABC b);

    void putdata()
    {
        cout << x << endl;
    }
};
 ABC operator +(ABC a,ABC b)
    {
        ABC c;
        c.x=a.x+b.x;
        return c;
    }
int main()
{
    int m,n;
    cin >> m >> n;
    ABC e1,e2,e3;
    e1.getdata(m);
    e2.getdata(n);
    e3=e1+e2;
    cout << "Sum : ";
    e3.putdata();
}

