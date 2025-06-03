//problem set 7
#include<bits/stdc++.h>
using namespace std;
//template < calculate_area > z;
void calculate_average(string s1, string s2)
{
    try {
        int l = s1.size();
        int l2 = s2.size();
        int c1=0,c2=0;
        for(int i = 0; i < l; i++){
            if((s1[i]-48>=0&&s1[i]-48<=9)||s1[0]=='-'||s1[i]=='.')c1++;
        }
        for(int i = 0; i < l2; i++){
            if((s2[i]-48>=0&&s2[i]-48<=9)||s2[0]=='-'||s2[i]=='.')c2++;
        }
        //cout << l << l2 << c1 << c2 << endl;
        if(l==c1&&l2==c2){
            double n1 = stod(s1);
            double n2 = stod(s2);
            //cout << n1 << " " << n2 << endl;
            cout << "Average : " << (double)(n1+n2)/2 << endl;
        }
        else throw(1);
    }
    catch(int n)
    {
        cout << "Invalid input. Please enter numeric values. " << endl;
    }
}

int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    calculate_average(s1,s2);
}
