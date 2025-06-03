#include<bits/stdc++.h>
using namespace std;
static float PI = 3.1416;
class Shape
{
    string name, color;
    int Area;
public:
    void setname()
    {
        cout << "The Name of Shape : ";
        cin >> name;
    }
    void setcolor()
    {
        cout << "The Color of Shape : ";
        cin >> color;
    }
    void displayinfo()
    {
        cout << "Shape Name : "<< name << endl << "Shape Color : " << color << endl;
    }
     void calculateArea(int side)
    {
        Area = side * side ;
        cout<< "Area of Square : "<< Area <<endl;
    }

};
class Rectangle : public Shape
{
    int length, width;
    int Area;
public:
    void setDimensions()
    {
        cout << "Enter the Length and Width of Rectangle : ";
        cin >> length >> width;
    }
    void calculateArea()
    {
        Area = length * width ;
    }
    void displayInfo()
    {
        cout << "Area of Rectangle : " << Area << endl;
    }
};
class circle : public Shape
{
    float radius, Area;
public:
    void setRadius()
    {
        cout << "Enter the radius of Circle : ";
        cin >> radius;
    }
    void calculateArea()
    {
        Area =PI * radius * radius;
    }
    void displayInfo()
    {
        cout << "Area of Circle : " << Area << endl;
    }
};
int main ()
{
    Shape e;
    e.setname();
    e.setcolor();
    e.displayinfo();
    e.calculateArea(10);

    Rectangle e1;
    cout << "\t\tRectangle \n\n";
    e1.setname();
    e1.setcolor();
    e1.setDimensions();
    e1.calculateArea();
    e1.displayinfo();
    e1.displayInfo();
    circle e2;
    cout << "\t\tCircle \n\n ";
    e2.setname();
    e2.setcolor();
    e2.setRadius();
    e2.calculateArea();
    e2.displayinfo();
    e2.displayInfo();

}
