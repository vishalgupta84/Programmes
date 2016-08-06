#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int searchPattern(string &haystack,string &needle){
    if(haystack.size()==0)
        return -1;
    if(needle.size()==0)
        return -1;
    if(haystack.size()<needle.size())
        return -1;
    for(unsigned int i=0;i<(haystack.size()-needle.size()+1);i++){
        int c=0;
        for(unsigned int j=0;j<needle.size();j++){
            if(needle[j]==haystack[i+j]){
                c++;
            }
        }
        if(c==needle.size())
            return i;
    }
    return -1;
}
int main(){
    string A,B;
    cin >>A;
    cin>>B;
    int result=searchPattern(A,B);
    cout << result << endl;
}
