#include<bits/stdc++.h>
using namespace std;
class addition
{
    public:
    int add(int x,int y)
    {
        return x+y;
    }
    float add(float x,float y,float z)
    {
        return x+y+z;
    }
    int add()
    {
        string a="Tamima";
        string b="Azad";
        string c=a+b;
        cout <<c<< endl;
    }
};
int main()
{
    addition obj;
    cout <<obj.add(3,5)<<"\n";
    cout <<obj.add(3.4 ,2.4,3.6)<<"\n";
    obj.add();
}
