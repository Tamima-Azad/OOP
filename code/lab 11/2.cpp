#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter two number: ";
    int  a,b;
    cin>>a>>b;
    try{
    if(b!=0){
        cout<<"result= "<<(float)a/b<<endl;
    }
    else{
        throw(b);
    }
    }
    catch(int b){
        cout<<"Math error"<<endl;
    }

}
