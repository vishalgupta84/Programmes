#include<iostream>
#include<vector>
using namespace std;
vector<int> removeElement(vector<int> A,int B){
    int i=0,j=0,n=A.size();
    while(i<n&&j<n){
        if(A[j]!=B){
            A[i]=A[j];
            j++;
            i++;
          }
          else{
            j++;
          }
    }
    if(i<n){
        A.erase(A.begin()+i,A.end());
    }
    return A;
}
int main(){
    int n,i,B;
    cin >> n;
    vector<int> A;
    for(i=0;i<n;i++){
        int num;
        cin >> num;
        A.push_back(num);
    }
    cin >> B;
    vector<int> output=removeElement(A,B);
    for(i=0;i<output.size();i++)
        cout << output[i] << " ";
    return 0;
}