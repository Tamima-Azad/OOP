#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class square
{
    int a;
public:
    square()
    {
        a=10;
    }
    friend class rectangle;
};
class rectangle
{
    int b;
public:
    int ar1,ar2;
    rectangle()
    {
        b=20;
    }
    void area1()
    {
        square obj;
        ar1=(obj.a*obj.a);
        cout<<ar1<<endl;
    }
    void area2()
    {
        square obj;
        ar2=(obj.a)*b;
        cout<<ar2<<endl;
    }
    void maximum()
    {
        if(ar2>ar1) cout<<"max area= "<<ar2;
        else if (ar2<ar1) cout<<"max area= "<<ar1;
        else cout<<"area is equal";
    }
};
int main()
{

    rectangle objt;
    objt. area1();
    objt.area2();
    objt.maximum();
}

