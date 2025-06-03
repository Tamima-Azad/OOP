#include<bits/stdc++.h>
using namespace std;
class s2;
class s1
{
    int x,y;
public:
    int total1=0;
    void getdata(int a,int b){
        x=a;y=b;
        for(int i=x;i<y;i++){
            if(i%9==0) total1=total1+i;
        }
    }
    friend void sum(s1 a1,s2 b1);
};
class s2
{
    int x,y;
public:
    int total2=0;
    void getdata(int a,int b){
        x=a;y=b;
        for(int i=x;i<y;i++)
            {
            if(i%9==0) total2=total2+i;
        }
        }
        friend void sum(s1 a1,s2 b1);
};
 void sum(s1 a1,s2 b1)
    {
        int total=a1.total1+b1.total2;
        cout<<"Total= "<<total;
    }
int main()
{
    int n,m,x,y;
    cin>>m>>n>>x>>y;
    s1 a1;
    s2 b1;
    a1.getdata(m,n);

    b1.getdata(x,y);
    sum(a1,b1);
}
