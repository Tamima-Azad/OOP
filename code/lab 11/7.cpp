#include<bits/stdc++.h>
using namespace std;
void calculateAverage(string x,string y)
{
    try{
        float a=0,b=0,s=0;
     for(int i=0;i<x.size();i++){
    if(x[i]>=48&&x[i]<=57){
        a=x[i]-48;
        s=s*10+a;
    }}
    a=s;
    s=0;
    float s1=0,f=0;
    for(int i=0;i<y.size();i++){
        if(y[i]>=48&&y[i]<=57)
        {
            if(y[i]=='.'){
                f=1;
                i=i+1;
            }
            else if(f==0){
            b=y[i]-48;
            s=s*10+b;
            }
            else if(f==1){
                b=y[i]-48;
                s=s+ (s1*10)/10;
            }

        }
    }
    b=s;
    cout<<a<<" "<<b<<endl;

    if(a==b||a!=b)  cout<<"avg= "<<float(a+b)/2<<endl;
    else{
    throw(x);}
    }
    catch(string x){
     cout<<"Invalid input.Please enter numeric values"<<endl;
    }


}
int main()
{
    cout<<"Enter two num: "<<endl;
    string a,b; cin>>a>>b;
    calculateAverage(a,b);


}
