#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
int validNumber(string A){
    int j=0,k=A.size()-1,sign=0;
    while(j<A.size()&&A[j]==' ')
        j++;
    while(k>=0&&A[k]==' ')
        k--;
    if(A.size()==1){
        int flag=(int)A[0]-48;
        if(flag>=0&&flag<=9)
            return 1;
        else
            return 0;
    }
    if(A[j]=='-'||A[j]=='+'){
        sign=1;
        j++;
    }
    if(j>k)
        return 0;
    unsigned int i;
    int flag_e=0,flag_f=0,dot=0;
    for(i=j;i<=k;i++){
        int flag=(int)A[i]-48;
        if(A[j]=='.')
            continue;
        if(A[j]<=47||A[j]>=58)
            return 0;
        if(flag>=0&&flag<=9)
            continue;
        if(A[i]=='.'){
            if(i==k)
                return 0;
            if(flag_e==1)
                return 0;
            if(dot==0){
                dot=1;
                continue;
            }
            else
                return 0;
        }
        if(A[i]=='e'){
            flag_e=1;
            if(i==k)
                return 0;
            if(A[i-1]=='.')
                return 0;
        }
        if(A[i]=='e'){
            if(i==A.size()-1)
                return 0;
            if(A[i+1]=='-'||A[i+1]=='+'){
                i++;
            }
        }
        else
            return 0;
    }
    return 1;
}
int main(){
    string A;
    getline(cin,A);
    int result=validNumber(A);
    cout << result;
    return 0;
}
