#include<bits/stdc++.h>
using namespace std;
class Time
{
    int hours;
    int minutes;
public:
    void getTime(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void putTime()
    {
       cout<<hours<<"hours and "<<minutes<<"minutes "<<"\n";
    }
    void sum(Time t1,Time t2)
    {
        minutes=t1.minutes+t2.minutes;
        minutes=minutes%60;
        hours=minutes/60;
        hours=hours+t1.hours+t2.hours;

    }
};
int main()
{
    Time t1,t2;
    int n,h,m,i;
    cin>>n;
    for( i=0;i<n;i++){
        cin>>h>>m;
        t1[i].getTime(h,m);

    }
    for(int i=0;i<n;i++){
        cout<<"T1"<<i;
        t1[i].putTime();
    }
}
