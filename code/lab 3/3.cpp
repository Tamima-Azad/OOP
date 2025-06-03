#include<bits/stdc++.h>
using namespace std;
class Time
{
    int hours;
    int minutes;
    int seconds;
public:
    void getTime(int h,int m,int s)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }
    void putTime()
    {
       cout<<hours<<" hours and "<<minutes<<" minutes "<<seconds<<"seconds"<<"\n";
    }
    void sum(Time t1,Time t2)
    {
        seconds=t1.seconds+t2.seconds;
        minutes=seconds/60;
        seconds=seconds%60;
        minutes=minutes+t1.minutes+t2.minutes;
        hours=minutes/60;
        minutes=minutes%60;

        hours=hours+t1.hours+t2.hours;

    }
};
int main()
{
    Time t1,t2,t3;
    int h1,h2,m1,m2,s1,s2;
    cin>>h1>>m1>>s1>>h2>>m2>>s2;
    t1.getTime(h1,m1,s1);
    t2.getTime(h2,m2,s2);
    t3.sum(t1,t2);
    cout<<"T1= ";
    t1.putTime();
    cout<<"T2= ";
    t2.putTime();
    cout<<"Total Time= ";
    t3.putTime();
    return 0;
}


