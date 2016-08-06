#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
int lastWordLength(string A){
    int len=0,p=0;
    unsigned int i;
    for(i=0;i<A.size();i++){
        if(len!=0)
            p=len;
        if(A[i]==' ')
            len=0;
        else
            len++;
    }
    if(len==0)
        return p;
    return len;
}
int main()
{
    string A;
    getline(cin,A);
    int len=lastWordLength(A);
    cout << len;
    return 0;
}
