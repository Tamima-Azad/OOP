#include<bits/stdc++.h>
using namespace std;
class room
{
    public:
    double length;
    double breadth;
    double height;
    double v,a;
    double area(void);
    double volume(void);

    void getdata(double a,double b,double c)
    {
        length=a;
        breadth=b;
        height=c;
    }
    void putdata(void)
    {
        cout<<" length= "<<length<<" breadth= "<<breadth<<" height= "<<height<<endl;
    }
};
double room::area(void)
{
    return a=length*breadth;
    //cout<<"area= "<<a<<endl;
}
double room::volume(void)
{
    return v=length*breadth*height;
    //cout<<"volume= "<<v<<endl;
}
int  main()
{
    room r1;
    double a,b,c;
    cin>>a>>b>>c;
    r1.getdata(a,b,c);
    r1.putdata();
    double x,y;
    x=r1.area();
    y=r1.volume();
    cout<<"area= "<<x<<"volume= "<<y<<endl;
    return 0;
}
