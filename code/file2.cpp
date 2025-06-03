#include <iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream outfile("text.txt");
    string s;
    while(outfile.eof()==0){
    getline(outfile,s);
    cout << s << endl;
    }
    outfile.close();
    ofstream infile("first.txt");
    infile << s;

return 0;
}
/*#include <iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream outfile("text.txt");
    string s;
    while(outfile.eof()==0){
    getline(outfile,s);
    cout << s << endl;
    }
    outfile.close();
    ofstream infile("first.txt");
    infile << s;

return 0;
}*/
