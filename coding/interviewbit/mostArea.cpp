#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int findArea(vector<int> A){
    int n=A.size(),i=0,j,maximum=0;
    while(i<n){
        j=i-1;
        int s=0,value=A[i];
        while(j>=0&&A[i]<=A[j]){
            s++;
            j--;
        }
        j=i+1;
        while(j<n&&A[i]<=A[j]){
            s++;
            j++;
        }
        int area=s*value;
        if(area>maximum)
            maximum=area;
        i++;
    }
    return maximum;
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
    int output=findArea(A);
    cout << output << " ";
    return 0;
}
