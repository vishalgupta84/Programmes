#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int uniquePath(std::vector<std::vector<int> > A){
	int row=A.size();
	int col=A[0].size();
	std::vector<std::vector<int> > path(row,std::vector<int>(col,0));
	path[0][0]=1;
	if(A[0][0]==1)
		return 0;
	if(row==0)
		return 0;
	if(col==0)
		return 0;
	for (int i = 1; i < row; ++i)
	{
		/* code */
		if(A[i][0]!=1)
			path[i][0]=path[i-1][0];
	}
	for(int j=1;j<col;j++)
		if(A[0][j]!=1)
			path[0][i]=path[0][i-1];
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			if(A[i][j]!=1)
				path[i][j]=path[i-1][j]+path[i][j-1];
		}
	}
	return path[row-1][col-1];
}
int main(){
	int n;
	cin >> n;	
	std::vector<std::vector<int> > A(n,std::vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < m; ++j)
		{
			/* code */
			cin >> A[i][j];
		}
	}
	int sol=uniquePath(A);
	cout << sol << endl;
	return 0;
}