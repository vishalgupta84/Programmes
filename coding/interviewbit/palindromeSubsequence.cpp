#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
int palindrome(string A){
    if(A.size()==0)
        return 0;
    if(A.size()==1)
        return 1;
    if(A.size()==2)
        if(A[0]==A[1])
            return 2;
        else
            return 0;
    int n=A.size(),i,j,k,start=0;
    int tbl[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            tbl[i][j]=1;
    for(k=2;k<=n;k++){
        for(i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(A[i]==A[j]){
                tbl[i][j]=tbl[i+1][j-1]+2;
            }
            if(A[i]!=A[j]){
                tbl[i][j]=max(tbl[i][j-1],tbl[i+1][j]);
            }
        }
    }

    return tbl[0][n-1];
}
int main(){
    string A;
    cin >> A;
    int re=palindrome(A);
    cout << re;
    return 0;
}
