#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
int evalute(vector<int> A){
    stack<int> s;
    int i=0,maximum=0;
    while(i<A.size()){
        if(s.empty()||A[s.top()]<=A[i])
            s.push(i++);
        else{
            int top=s.top();
            s.pop();
            int p;
            if(s.empty())
                p=i;
            else
                p=i-s.top()-1;
            int area=A[top]*p;
            if(area>maximum)
                maximum=area;
        }
    }
    while(!s.empty()){
        int top=s.top();
            s.pop();
            int p;
            if(s.empty())
                p=i;
            else
                p=i-s.top()-1;
            int area=A[top]*p;
            if(area>maximum)
                maximum=area;
    }
    return maximum;
}
int main(){
    //string A;
    vector<int> A;
    int n;
    cin >> n;
    //cin >> A;
    while(n--){
        int num;
        cin >> num;
        A.push_back(num);
    }
    int str=evalute(A);
    cout << str;
    return 0;
}

