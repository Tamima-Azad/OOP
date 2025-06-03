#include <bits/stdc++.h>
using namespace std;
class binary{
    int a;
    public:
    void input(){
        cin >> a;
    }
    // binary operator+(binary obj){
    //     binary c;
    //     c.a = a + obj.a;
    //     return c;
    // }
    friend binary operator + (binary aa, binary b){
        binary c;
        c.a = aa.a + b.a;
        return c;
    }
    void display(){
        cout << "Result : " << a << endl;
    }
};

int main(){
    binary a, b, c;
    a.input();
    b.input();
    c = a+b;
    c.display();    
}



