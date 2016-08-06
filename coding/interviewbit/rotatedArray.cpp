#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int rotated(vector<int> A){
    int low=0,high=A.size()-1,n=A.size();
    while(low<=high){
        if(A[low]<=A[high])
            return A[low];
        int mid=(low+high)/2;
        int mid_1=(mid+1)%n;
        int mid_2=(mid+n-1)%n;
        if(A[mid]<=A[mid_1]&&A[mid]<=A[mid_2])
            return A[mid];
        else if(A[mid]<=high)
            high=mid-1;
        else if(A[mid]>=low)
            low=mid+1;
    }
}
int main(){
    int n,num,i;
    cin >> n;
    vector<int> A;
    for(i=0;i<n;i++)
    {
        cin >> num;
        A.push_back(num);
    }
    int r= rotated(A);
    cout << r;
    return 0;
}