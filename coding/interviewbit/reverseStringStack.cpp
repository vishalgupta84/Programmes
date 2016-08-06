#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
string evalute(string A){
    stack<char> s;
    string str="";
    int i=0;
    while(i<A.size()){
        s.push(A[i]);
        i++;
    }
    while(!s.empty()){
        char top=s.top();
        s.pop();
        str=str+string(1,top);
    }
    return str;
}
int main(){
    string A;
    //vector<int> A;
    //int n;
    //cin >> n;
    cin >> A;
    /*while(n--){
        int num;
        cin >> num;
        A.push_back(num);
    }*/
    string str=evalute(A);
    cout << str;
    return 0;
}


