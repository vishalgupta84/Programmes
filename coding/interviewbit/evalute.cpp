#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
/*struct Node{
    int val;
    struct Node *next;
};
typedef struct Node node;*/
int evalute(vector<string> A){
    stack<int> arr;
    for(unsigned i=0;i<A.size();i++){
        if(A[i]=="+"){
            int one=arr.top();
            arr.pop();
            int two=arr.top();
            arr.pop();
            int result=one+two;
            arr.push(result);
        }
        else if(A[i]=="-"){
            int one=arr.top();
            arr.pop();
            int two=arr.top();
            arr.pop();
            int result=two-one;
            arr.push(result);
        }
        else if(A[i]=="*"){
            int one=arr.top();
            arr.pop();
            int two=arr.top();
            arr.pop();
            int result=one*two;
            arr.push(result);
        }
        else if(A[i]=="/"){
            int one=arr.top();
            arr.pop();
            int two=arr.top();
            arr.pop();
            int result=two/one;
            arr.push(result);
        }
        else{
            //string str=A[i];
            int len=A[i].size();
            char str[len];
            for(unsigned int j=0;j<len;j++){
                str[j]=A[i][j];
            }
            int number=atoi(str);
            arr.push(number);
        }
        cout << arr.top()<<endl;
    }
    return arr.top();

}
int main(){
    vector<string> A;
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        A.push_back(str);
    }
    int res=evalute(A);
    cout << res;
}