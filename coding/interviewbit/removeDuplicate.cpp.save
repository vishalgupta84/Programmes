#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
vector<int> removeDuplicate(vector<int> A){
    vector<int> output;
    int i=0,n=A.size(),j;
    while(i<n){
        j=i+1;
        int c=0;
        while(j<n){
        if(A[i]==A[j]){
            c++;
            if(c<2)
                j++;
            }
        }
        i++;
    }
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
    vector<int> r=removeDuplicate(A);
    for(i=0;i<r.size();i++)
        cout << r[i] << " ";
    return 0;
}
