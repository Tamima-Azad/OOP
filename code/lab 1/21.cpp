#include<bits/stdc++.h>
using namespace std;
class item
{
    int num;
    float cost;
public:
    void getdata(int a,float b);
    void putdata(void)
    {
        cout<<"num: "<<num<<" "<<"cost: "<<cost<<endl;
    }
};
void item :: getdata(int a,float b)
{
    num=a;
    cost=b;
}
int main()
{
    item p,q;
    int x;
    float y;
    cin >>x>>y;
    p.getdata(x,y);
    p.putdata();
    q.getdata(x,y);
    q.putdata();
}

