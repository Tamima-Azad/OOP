
#include<bits/stdc++.h>
using namespace std;
template<class t>
class Calculator
{
    t n1,n2;
public:
    Calculator(t n1,t n2){
    this->n1=n1;
    this->n2=n2;
    }
    void addition()
    {
        cout<<"sum= "<<n1+n2<<endl;
    }
    void subtraction()
    {
       cout<<"sub= "<<n1-n2<<endl;
    }
    void multiplication()
    {
       cout<<"mul= "<<n1*n2<<endl;
    }
    void divition()
    {
        if(n2!=0)  cout<<"div= "<<n1/n2<<endl;
        else cout<<"div= math error"<<endl;
    }
};
int main()
{
    cout<<"operation for int type"<<endl;
    float a,b;
    cin>>a>>b;
    Calculator<float>i(a,b);
    i.addition();
    i.subtraction();
    i.multiplication();
    i.divition();
    cout<<"operation for float type"<<endl;
    Calculator<float>f(5.5,4.5);
    f.addition();
    f.subtraction();
    f.multiplication();
    f.divition();
}

