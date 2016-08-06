#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
void print(vector<vector<int> > A){
    cout <<endl;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++)
            cout << A[i][j] <<" ";
    cout <<endl;}
}
vector<vector<int> > evalute(vector<vector<int> > A){
    vector<vector<int> > result;
    for(int i=0;i<A[0].size();i++){
        vector<int> B;
        int k=0,j=i;
        while(j>=0){
            B.push_back(A[k][j]);
            k++;
            j--;
        }
        result.push_back(B);
    }
    for(int i=1;i<A.size();i++){
        vector<int> B;
        int j=A[0].size()-1,k=i;
        while(k<A.size())
            B.push_back(A[k++][j--]);
        result.push_back(B);
    }
    return result;
}
int main(){
    vector<vector<int> > A;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        vector<int> B(n);
        for(int j=0;j<n;j++){
            cin >> B[j];
        }
        A.push_back(B);
    }
    print(A);
    vector<vector<int> > result=evalute(A);
    print(result);
    return 0;
}

