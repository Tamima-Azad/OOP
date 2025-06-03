#include <bits/stdc++.h>
using namespace std;
class Unary
{
    int a;
    public:
    void input(){
        cin >> a;
    }
    void operator++(int){
        a++;
    }
    friend Unary operator ++ (Unary obj){
        obj.a = obj.a + 1;
        return obj;
    }
    void display(){
        cout << a << endl;
    }
};
int main(){
    Unary obj;
    obj.input();
    ++obj;
    obj.display();
    //obj++;
    obj.display();
    return 0;
}
