#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("file.txt");
    file << "SL     NAME             CGPA";
    int n; cin >> n;
    for(int i=1;i<=n;i++)
    {
        file << "\n" << i;
        char name[30];
        gets(name);
        file << "      "<< name << endl;
        int l = strlen(name);
        cout << l << endl;
        float cgpa;
        cin >> cgpa;
        for(int j=0;j<26-l;j++){
            file << " ";
        }
        file << cgpa;

    }
    file.close();
}
