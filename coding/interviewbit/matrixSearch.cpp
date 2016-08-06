#include<iostream>
#include<vector>
using namespace std;
int searchMatrix(vector<vector<int> >&A,int B){
    int r=A.size();
    int c=A[0].size();
    cout << r << " "<< c;
    int first=0;
    int last=r*c-1;
    int middle;
    if(r==0)
        return 0;
    if(A[0][0]==B)
        return 1;
    while(first<=last){
        middle=(first+last)/2;
        int x=middle/c;
        int y=middle%c;
        if(A[x][y]==B)
            return 1;
        if(A[x][y]>B)
            last=middle-1;
        else
            first=middle+1;
    }
    return 0;
}
int main()
{
    vector<vector<int> > A;
    vector<int> t;
    t.push_back(1);
    A.push_back(t);
    t.push_back(2);
    t.push_back(3);
    vector<int> m;
    m.push_back(4);
    m.push_back(5);
    m.push_back(6);
    A.push_back(m);
    int B=1;
    int result=searchMatrix(A,B);
    cout << " "<<result;
}
