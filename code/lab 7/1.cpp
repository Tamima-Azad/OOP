#include<bits/stdc++.h>
using namespace std;
class Shape
{
    string name,color;
    int side,height;
public:

    void setname()
    {
        cout<<"Enter The Shape Name: ";
        cin>>name;
    }
    void setcolor()
    {
        cout<<"Enter The Shape Color: ";
        cin>>color;
    }
    float area;
    void calculateArea()
    {
     cout<<"Enter The Side & Height: "<<endl;
     cin>>side>>height;
     area=0.5*side*height;
    }
    int area2;
    void calculateArea(int r)
    {
        area2=r*r;
    }
    void displayinfo()
    {
        cout<<name<<" ,"<<color<<" "<<'\n'<<"Triangle area ="<<area<<endl;
        cout<<"Square= "<<area2<<endl;
    }

};
class Rectangle: public Shape
{
    int length;
    int width;
public:
    void setDimensions()
    {
        cout<<"Enter length & width: ";
        cin>>length>>width;
    }
    int area;
    void calculateArea()
    {
        area=length*width;
    }
    void displayinfo()
    {
        cout<<"rectangle area= "<<area<<endl;
    }
};
class Circle: public Shape
{
    int radius;
public:
    void setRadius()
    {
        cout<<"Enter radius: "<<endl;
        cin>>radius;
    }
    float area;
    void calculateArea()
    {
        area=3.14*radius*radius;
    }
    void displayinfo()
    {
        cout<<"circle area= "<<area<<endl;
    }

};
int main()
{
    Shape s;
    s.setname();
    s.setcolor();
    s.calculateArea();
    s.calculateArea(6);
    s.displayinfo();
    Rectangle r;
    r.setname();
    r.setcolor();
    r.setDimensions();
    r.calculateArea();
    r.displayinfo();
    Circle c;
    c.setname();
    c.setcolor();
    c.setRadius();
    c.calculateArea();
    c.displayinfo();
}
