#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
#include<hash_map>
#include<map>
using namespace std;
void print(vector<vector<int> > A){
    cout <<endl;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[i].size();j++)
            std::cout << A[i][j] << " ";
        std::cout << endl;
    }
}
vector<vector<int> >evalute(vector<vector<int> > &A){
    //cout << A.size() << " "<<A[0].size()<<endl;
    int row=0,col=0;
    for(int j=0;j<A[0].size();j++){
        if(A[0][j]==0){
            for(int i=0;i<A.size();i++)
                if(A[i][j]==1)
                    A[i][j]=-1;
            row=1;
            A[0][j]=-1;
        }
    }
    for(int j=0;j<A.size();j++){
        if(A[j][0]==0){
            for(int i=0;i<A[0].size();i++)
                if(A[j][i]==1)
                    A[j][i]=-1;
            col=1;
            A[j][0]=-1;
        }
    }
    for(int i=1;i<A.size();i++){
        for(int j=1;j<A[i].size();j++){
            if(A[i][j]==0){
                A[0][j]=-1;
                A[i][0]=-1;
            }
        }
    }
    for(int i=1;i<A.size();i++){
        for(int j=1;j<A[i].size();j++){
            if(A[0][j]==-1||A[i][0]==-1){
                A[i][j]=0;
            }
        }
    }
    if(row){
        for(int j=0;j<A[0].size();j++)
            A[0][j]=0;
    }
    if(col){
        for(int j=0;j<A.size();j++)
            A[j][0]=0;
    }
    for(int j=0;j<A[0].size();j++)
        if(A[0][j]==-1)
        A[0][j]=0;
    for(int j=0;j<A.size();j++)
        if(A[j][0]==-1)
        A[j][0]=0;
    return A;
}
int main(){
    vector<vector<int> > A;
    int n,m;
    cin >> m>>n;
    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int num;
            cin >> num;
            temp.push_back(num);
        }
        A.push_back(temp);
    }
    print(A);
    vector<vector<int> > output=evalute(A);
    print(A);
}
