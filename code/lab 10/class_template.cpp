#include<bits/stdc++.h>
using namespace std;
template<class x>
class Demo
{
    x n1,n2;
public:
    Demo(x a,x b)
    {
        n1=a;
        n2=b;
    }
    void display()
    {
        cout<<n1<<" "<<n2<<endl;
    }
};
int main()
{
    Demo<int>da(2,4);
    da.display();
    Demo<string>ds("Tamima","Azad");
    ds.display();
}
