#include<bits/stdc++.h>
using namespace std;
class a
{
   int x;
   public:
       void getdata(int i){ x=i;}
       friend void sum(a);
};
void sum(a a1)
{
    int total;
    total=(a1.x*(a1.x+1))/2;
    cout<<"total= "<<total;
}

int main()
{
    a a1;
    int n;
    cin>>n;
    a1.getdata(n);
    sum(a1);
}
