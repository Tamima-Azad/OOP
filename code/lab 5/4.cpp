#include<bits/stdc++.h>
using namespace std;
class Animal
{

public:
    void function()
    {
        cout <<"Eating..."<<endl;
    }
};
class Man:public Animal
{
public:
    void function()
    {
        cout<<"Walking..."<<endl;
    }
};
int main()
{
    Animal a;
    a.function();
    Man m;
    m.function();
}
