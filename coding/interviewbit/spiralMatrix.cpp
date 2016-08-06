#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
void print(vector<vector<int> > A){
    cout <<endl;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++)
            cout << A[i][j] <<" ";
    cout <<endl;}
}
vector<vector<int> > evalute(int A){
    int p=1;
    int up=0,down=A-1,left=0,right=A-1,dir=1;
    vector<int> B(A,0);
    vector<vector<int> > result;
    for(int i=0;i<A;i++)
        result.push_back(B);
    while(p!=(A*(A+1))){
        if(dir==1){
            for(int i=left;i<=right;i++)
                result[up][i]=p++;
            dir=2;
            up++;
        }
        if(dir==2){
            for(int i=up;i<=down;i++)
                result[i][right]=p++;
            dir=3;
            right--;
        }
        if(dir==3){
            for(int i=right;i>=left;i--)
                result[down][i]=p++;
            down--;
            dir=4;
        }
        if(dir==4){
            for(int i=down;i>=up;i--)
                result[i][left]=p++;
            left++;
            dir=1;
        }
    }
    cout << p <<endl;
    return result;
}
int main(){
    int A;
    cin >> A;
    vector<vector<int> > result=evalute(A);
    print(result);
    return 0;
}