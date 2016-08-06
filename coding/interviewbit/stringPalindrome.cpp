#include<iostream>
#include<cstring>
#include<cstdlib>
#include<vector>
#include <cctype>
#include <algorithm>
#include <iterator>
using namespace std;
string removeSpace(string str){
    str.erase(std::remove_if(str.begin(), str.end(),static_cast<int(*)(int)>(isspace)), str.end());
    int len=str.size()
    for(unsigned int i=0;i<len;i++)
    {
        int val=str[i];
        if(val>=65&&val<=90)
        {
            val=val+32;
            str[i]=val;
        }
    }
    return str;
}
bool palindrome(string A){
    string str=removeSpace(A);
    int len=str.size();
    for(unsigned int i=0;i<len;i++){
        if(str[i]!=str[len-1-i])
            return false;
    }
    return true;
}
int main(){
    string str;
    getline(std::cin,str);
    int result=palindrome(str);
    cout << result << endl;
    return 0;
}
