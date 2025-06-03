#include<bits/stdc++.h>
using namespace std;
#define pi 3.1416
class Shape_Circle
{
public:
    int length,width,radius;
    void calculateArea()
    {
        cin>>length>>width>>radius;
        cout<<"Circle Area= "<<pi*radius*radius<<endl;
    }
};
class Rectangle:public Shape_Circle
{
public:
    void calculateArea()
    {
        cout<<"Rectangle Area= "<<length*width;
    }
};
int main()
{
    Rectangle rt;
    cout<<"Enter Length,Width,radius:";
    rt.Shape_Circle::calculateArea();
    rt.calculateArea();

}
