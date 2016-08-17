#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printMat(vector<std::vector<int> > M ,int row,int col)
{
    vector<int> table(row,1);
    for(int i=0;i<row;i++){
        for(int j=i+1;j<row;j++){
            if(M[i]==M[j])
                table[j]=0;
        }
    }
    //for(int i=0;i<row;i++)
        //cout << "row= " << table[i] << endl;
    for(int i=0;i<row;i++){
        if(table[i]){
            for(int j=0;j<col;j++)
                cout << M[i][j] << " ";
            cout << "$";
        }
    }
}
int main(){
    int col,row;
    cin >> row >> col;
    std::vector<std::vector<int> > A(row,std::vector<int>(col));
    for (int i = 0; i < row; ++i)
    {
        /* code */
        for(int j=0;j<col;j++)
            cin >> A[i][j];
    }
    printMat(A,row,col);
}