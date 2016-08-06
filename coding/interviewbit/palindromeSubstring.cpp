#include<iostream>
#include<cstring>
#include<cstdlib>
#include<vector>
using namespace std;
string palindrome(string A){
    int n=A.size();
    string output;
    if(n==0)
        return output;
    if(n==1)
        return A;
    int i;
    /*bool **table=new bool *[n];
    for(i=0;i<n;i++)
        table[i]=new bool[n];*/
    bool table[n][n];
    //vector<vector<bool> > table;
    memset(table, 0, sizeof(table));
    int j,k;
    int maxLength=1;
    for(i=0;i<n;i++)
        table[i][i]=true;
    int start=0;
    for(i=0;i<n-1;i++)
    if(A[i]==A[i+1]){
        start=i;
        maxLength=2;
        table[i][i+1]=true;
    }
    for (int k = 3; k <= n; ++k){
        for (int i = 0; i < n-k+1 ; ++i){
            int j = i + k - 1;
            if (table[i+1][j-1] && A[i] == A[j])
            {
                table[i][j] = true;
                if (k > maxLength)
                {
                    start = i;
                    maxLength = k;
                }
            }
        }
    }
    for(i=start;i<start+maxLength;i++)
        output.push_back(A[i]);
    output.push_back('\0');
    return output;
}
int main(){
    string A;
    cin >> A;
    string result=palindrome(A);
    cout << result;
}
