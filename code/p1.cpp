#include<bits/stdc++.h>
using namespace std;
class Complex_Number
{
     double real, imaginary, r_real, i_imaginary;
     double mag, add_real, add_imag, sub_real, sub_imag, mul_real, mul_imag;
public:
    void input(){
        cout << "The first Complex Number \nReal part : ";
        cin >> real; cout << "Imaginary part : ";
        cin >> imaginary;
    }
    void Magnitude(){
        mag = sqrt((pow(real,2))+pow(imaginary,2));
    }
    void Add(double r_real, double i_imaginary ){
        this->r_real = r_real, this->i_imaginary = i_imaginary;
        add_real = real + r_real, add_imag = imaginary + i_imaginary;
    }
    void subtraction(){
         sub_real = real-r_real, sub_imag = imaginary - i_imaginary;
    }
    void multiply(){
        mul_real = real*r_real - imaginary*i_imaginary;
        mul_imag = real * i_imaginary + r_real * imaginary;
    }
    void display()
    {
        cout << "Magnitude of first Number : " << mag << endl;
        if(add_imag>0)cout << "After Add two Complex Number : " << add_real << " + " << add_imag << "i" << endl;
        else if(add_imag<0)cout << "After Add two Complex Number : " << add_real << add_imag << "i" << endl;
        else cout << "After Add two Complex Number : " << add_real << endl;
        if(sub_imag>0)cout << "After subtract two Complex Number : " << sub_real << " + " << sub_imag << "i" << endl;
        else if(sub_imag<0)cout << "After subtract two Complex Number : " << sub_real  << sub_imag << "i" << endl;
        else cout << "After subtract two Complex Number : " << sub_real << endl;
        if(mul_imag>0)cout << "After Multiply two Complex Number : " << mul_real << " + " << mul_imag << "i" << endl;
        else if(mul_imag<0)cout << "After Multiply two Complex Number : " << mul_real  << mul_imag << "i" << endl;
        else cout << "After Multiply two Complex Number : " << mul_real << endl;

    }
};
int main()
{
    Complex_Number obj;
    obj.input();cout << endl;
    double r,i;
    cout << "The second Complex Number \nReal part : ";
    cin >> r; cout << "Imaginary : "; cin >> i;cout << endl;
    obj.Magnitude();
    obj.Add(r,i);
    obj.subtraction();
    obj.multiply();
    obj.display();
}
