#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int isPower(string A)
{
    int i;
    if(A.size()==0)
        return 0;
    if(A.size()==1&&A[0]=='1')
        return 0;
    while(A.size()!=0){
        int carry=0;
        for(i=0;i<A.size();i++){
            int val=(int)A[i]-48;
            int op=carry*10+val;
            carry=op%2;
            int ans=op/2;
            A[i]=(char)(ans+48);
        }
        if(A[0]=='0')
            A.erase(A.begin());
        if(carry&&A.size()!=0)
            return 0;
    }
    return 1;
}
int main()
{
    string str;
    cin >> str;
    int result=isPower(str);
    cout << result;
    return 0;
}
