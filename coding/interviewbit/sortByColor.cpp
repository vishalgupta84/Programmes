#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
void sortByColor(vector<int> &A){
    int zero=0,one=0,two=0;
    int n=A.size(),i;
    for(i=0;i<n;i++){
        if(A[i]==0)
            zero++;
        if(A[i]==1)
            one++;
        if(A[i]==2)
            two++;
    }
    int s=0;
    for(i=0;i<zero;i++){
        A[s]=0;
        s++;
    }
    for(i=0;i<one;i++){
        A[s]=1;
        s++;
    }
    for(i=0;i<two;i++){
        A[s]=2;
        s++;
    }
    //return A;
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
    sortByColor(A);
    for(i=0;i<A.size();i++)
        cout << A[i] << " ";
    return 0;
}
