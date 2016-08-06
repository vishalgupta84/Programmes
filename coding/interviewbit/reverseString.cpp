#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<sstream>
using namespace std;
string reverseString(string &A){
    stringstream stream(A);
    string word,out;
    while(stream >> word&&word.size()){
        out.insert(0,word);
        out.insert(0," ");
    }
    out.erase(out.begin());
    A=out;
    return out;
}
int main(){
    string A;
    getline(cin,A);
    string str=reverseString(A);
    cout << A;
    return 0;
}
