#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
vector<int> evalute(vector<int> A){
    stack<int> arr;
    vector<int> result;
    for(unsigned int i=0;i<A.size();i++){
        int value=A[i];
        if(arr.empty()){
            result.push_back(-1);
            arr.push(value);
        }
        else{
            int re=-1,flag=0;
            while(!arr.empty()){
                int top=arr.top();
                if(top<value){
                    re=top;
                    arr.push(value);
                    break;
                }
                else{
                    arr.pop();
                    flag=1;
                }
            }
            if(flag)
                arr.push(value);
            result.push_back(re);
        }
    }
    return result;
}
int main(){
    vector<int> A;
    int n;
    cin >> n;
    while(n--){
        int str;
        cin >> str;
        A.push_back(str);
    }
    vector<int> res=evalute(A);
    for(n=0;n<res.size();n++)
        cout << res[n] << " ";
    return 0;
}
