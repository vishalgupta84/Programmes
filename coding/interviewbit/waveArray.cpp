#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
void print(vector<int> A){
    for(int i=0;i<A.size();i++)
        cout << A[i] <<" ";
    cout <<endl;
}
bool compare(int a,int b){
    return a<b;
}
vector<int> evalute(vector<int> &A){
    sort(A.begin(),A.end(),compare);
    int n=A.size();
    vector<int> one,two;
    for(int i=0;i<A.size();i=i+2){
        one.push_back(A[i]);
    }
    for(int i=1;i<A.size();i=i+2)
        two.push_back(A[i]);
    for(int i=0;i<two.size();i++)
        A[i*2]=two[i];
    int i;
    for(i=0;i<two.size();i++)
        A[i*2+1]=one[i];
    if(i<one.size())
        A[A.size()-1]=one[i];
    return A;
}
int main(){
    int n;
    cin >>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin >> A[i];
    vector<int> result=evalute(A);
    print(result);
    return 0;
}
