#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
int diffK(vector<int> A,int B){
    int l=0,i,j,n=A.size();
    //sort(A.begin(),A.end(),compare);
    while(l<n){
        i=l;
        j=A.size()-1;
        while(i<j){
        if(A[j]-A[i]==B)
            return 1;
        else if(A[j]-A[i]>B)
            j--;
        else
            i++;
        }
        l++;
    }
    return 0;
}
int main(){
    int n,i;
    cin >> n;
    vector<int> A;
    for(i=0;i<n;i++){
        int num;
        cin >> num;
        A.push_back(num);
    }
    int k;
    cin >> k;
    int r=diffK(A,k);
    //for(i=0;i<r.size();i++)
        //cout << r[i] << " ";
    cout << r;
    return 0;
}
