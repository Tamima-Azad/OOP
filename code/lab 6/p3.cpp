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
    friend ABC operator ++(ABC a)
    {
        ABC b;
        b.x = a.x+1;
        return b;
    }
    void putdata()
    {
        cout << x << endl;
    }
};
int main()
{
    int y;
    cin >> y;
    ABC e1;
    e1.getdata(y);
    e1 = ++e1;
    cout << "Increment : ";
    e1.putdata();
}
