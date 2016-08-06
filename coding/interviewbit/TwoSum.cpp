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
vector<int> evalute(vector<int> A,int sum){
    vector<int> result(2,-1);
    hash_map<int,int> m;
    for(unsigned int i=0;i<A.size();i++){
        int key=sum-A[i];
        if(m.containsKey(key)){
            result[0]=i+1;
            result[1]=key;
            break;
        }
        m.put(i,key);
    }
    return result;
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
    cin >> sum;
    vector<int> output=evalute(A,sum);
    if(output.size()){
        cout << output[0] << " "<<output [1] <<endl;
    }
    return 0;
}
