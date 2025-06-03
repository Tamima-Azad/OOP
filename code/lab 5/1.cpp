#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class num1
{
    int n1;
public:
    num1() {n1=10;}
    friend class num2;
};
class num2
{
    int n2;
public:
    num2() {n2=20;}
    void avg()
    {
        num1 objt;
        cout<<"Average= "<<(objt.n1+n2)/2<<endl;
    }
};
int main()
{
    num2 obj;
    obj.avg();
}
