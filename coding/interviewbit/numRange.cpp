#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int findNumber(vector<int> &A,int B,int C){
    long int sum=0;
    int i=0,j,n=A.size(),c=0;
    while(i<n){
        if(A[i]>C){
            i++;
            continue;
        }
        j=i+1;
        sum=A[i];
        while(sum<=C&&j<=n){
            if(sum>=B)
                c++;
            sum=sum+A[j];
            j++;
        }
        i++;
    }
    return c;
}
int main(){
    vector<int> A;
    int n,i,num;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> num;
        A.push_back(num);
    }
    int B,C;
    cin >> B;
    cin >> C;
    int result=findNumber(A,B,C);
    cout <<"result is "<< result << endl;
}
