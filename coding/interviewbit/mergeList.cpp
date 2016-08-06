#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
vector<int> mergeList(vector<int> A,vector<int> B){
    vector<int> output;
    int n=A.size(),m=B.size(),i=0,j=0;
    while(i<n&&j<m){
        if(A[i]<=B[j]){
            output.push_back(A[i]);
            i++;
        }
        if(B[j]<=A[i]){
            output.push_back(B[j]);
            j++;
        }
    }
    while(i<n){
        output.push_back(A[i]);
        i++;
    }
    while(j<m){
        output.push_back(B[j]);
        j++;
    }
    return output;
}
int main(){
    int n,m,i;
    cin >> n;
    cin >> m;
    vector<int> A,B;
    for(i=0;i<n;i++){
        int num;
        cin >> num;
        A.push_back(num);
    }
    for(i=0;i<m;i++){
        int num;
        cin >> num;
        B.push_back(num);
    }
    vector<int> output=mergeList(A,B);
    for(i=0;i<output.size();i++)
    cout << output[i] << " ";
    return 0;
}
