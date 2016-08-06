#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
#include<hash_map>
#include<map>
using namespace std;
void print(vector<int> A){
    int i;
    for(i=0;i<A.size();i++)
        cout << A[i] << " ";
    cout <<endl;
}
int evalute(vector<int> A){
    int j=0;
    for(unsigned int i=0;i<A.size();i++){
        if(A[i]<=0){
            swap(A[i],A[j]);
            j++;
        }
    }
    A.erase(A.begin(),A.begin()+j);
    for(int i=0;i<A.size();i++){
        if((abs(A[i])-1)<A.size()&&A[(abs(A[i])-1)]>0){
            A[abs(A[i])-1]=-1*A[abs(A[i])-1];
        }
    }
    for(int i=0;i<A.size();i++)
        if(A[i]>0)
            return i+1;
    return A.size()+1;
}
int main(){
    int n;
    cin >> n;
    vector<int> A;
    while(n--){
        int num;
        cin >> num;
        A.push_back(num);
    }
    //print(A);
    int sum;
    int output=evalute(A);
    //print(A);
    cout << output;
    return 0;
}
