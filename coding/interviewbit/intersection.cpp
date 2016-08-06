#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
vector<int> intersection(vector<int> A,vector<int> B){
    if(A.size()<B.size())
        return intersection(B,A);
    int i=0,j=0,n=A.size(),m=B.size();
    vector<int> output;
    while(i<n&&j<m){
        while(i<n&&A[i]<B[j])
            i++;
        if(A[i]==B[j]){
            output.push_back(B[j]);
            i++;
            }
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
    vector<int> output=intersection(A,B);
    for(i=0;i<output.size();i++)
    cout << output[i] << " ";
    return 0;
}
