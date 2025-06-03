#include<bits/stdc++.h>
using namespace std;
template<class t>
    t sum(t a,t b){
    return a+b;}

int main()
{

    string a,b;
    cin>>a>>b;
    sum<string>(a,b);
    cout<<sum(a,b)<<endl;
    cout<<sum(3.6,3.8)<<endl;
}
