#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
vector<vector<int> > evalute(int k){
    vector<vector<int> > result;
    if(k==0)
    return result;
    vector<int> A;
    A.push_back(1);
    result.push_back(A);
    int i;
    int val1,val2=A[0],last=A[A.size()-1];
    for(i=1;i<k;i++){
        for(int j=1;j<A.size();j++){
            val1=A[j];
            A[j]=A[j]+val2;
            val2=val1;
        }
        A.push_back(last);
        result.push_back(A);
    }
    return result;
}
int main(){
    int k;
    cin >> k;
    vector<vector<int> > A=evalute(k);
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++)
            cout << A[i][j] << " ";
        cout <<endl;
    }
}
