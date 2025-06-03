#include<bits/stdc++.h>
using namespace std;
int main()
{
    try{
        cout<<"enter age: "<<endl;
        int age;
        cin>>age;
        if(age>=18) cout<<"Access granted- you are old enough.";
        else{
            throw(age);
        }
    }
    catch(int myage)
    {
        cout<<"Access granted - you must be at least 18 years old."<<endl;
        cout<<"Age is :"<<myage;
    }
    return 0;
}
