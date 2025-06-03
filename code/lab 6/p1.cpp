#include<bits/stdc++.h>
using namespace std;
class Unary
{
    int x;
public:
    void getdata (int y)
    {
        x=y;
    }
    void operator++(int)
    {
        ++x;
    }
void putdata()
    {
        cout << x << endl;
    }

};
int main()
{
    Unary e;
    int v;
    cin >> v;
    e.getdata(v);
    e.putdata();
    e++;
    cout << "Increment : ";
    e.putdata();

}
