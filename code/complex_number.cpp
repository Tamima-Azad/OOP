#include<bits/stdc++.h>
using namespace std;
class Complex_Number
{
    double Real,Imaginary,r_Real,i_Imaginary,mgntd,add_real,add_Imag,sub_real,sub_complex;
public:
    void input(){
        cout<<"The first Complex Number \nReal Part: ";cin>>Real;
        cout<<"Imaginary Part: ";cin>>Imaginary;
    }
    void Magnitude(){
        mgntd=sqrt(pow(Real,2)+pow(Imaginary,2));
    }
    void Add(double rl,double Im){
        r_Real=rl,i_Imaginary=Im;
        add_real=r_Real+Real,add_Imag=i_Imaginary+Imaginary;
        cout<<add_real<<" + "<<add_Imag<<"i\n";
    }
    void subtraction(){

    }

};
int main()
{
    Complex_Number cn;
    cn.input();
    cn.Magnitude();
    double r,i;
    cout<<"Enter second Complex Number\nReal part: ";
    cin>>r;cout<<"Imaginary Part: ";cin>>i;
    cn.Add(r,i);
}
