#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
string evalute(string A){
    int i=0,n=A.size();
    string str="";
    if(n==1){
        if(A==".")
            return "/";
        if(A=="/")
            return A;
        return ("/"+A);
    }
    if(n==2){
        if(A=="..")
        return "/";
    }
    stack<string> arr;
    while(i<n){
        string temp="";
        while(A[i]=='/')
            i++;
        while(A[i]!='/'&&i<n){
            temp=temp+string(1,A[i]);
            //cout << temp << " "<< i<< endl;
            i++;
        }
        if(temp.size()!=0){
            //cout << temp <<endl;
            if(temp==".."){
                if(!arr.empty())
                    arr.pop();
            }
            else if(temp=="."){

            }
            else{
                arr.push("/"+temp);
            }
        }
        //i++;
    }
    if(arr.empty())
    return "/";
    while(!arr.empty()){
        str=str.insert(0,arr.top());
        string tmp=arr.top();
       // cout << tmp <<endl;
        //cout << arr.top() << " ";
        arr.pop();
    }
    return str;
}
int main(){
    string A;
    cin >> A;
    string str=evalute(A);
    cout << str;
    return 0;
}
