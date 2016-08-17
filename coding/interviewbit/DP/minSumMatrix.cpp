#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int health(std::vector<std::vector<int> > A ){
	int n=A.size();
	if(n==0)
		return 0;
	int m=A[0].size();
	for(int i=m-2;i>=0;i--){
		A[n-1][i]=A[n-1][i+1]+A[n-1][i];
	}
	for(int i=n-2;i>=0;i--)
		A[i][m-1]=A[i][m-1]+A[i+1][m-1];
	for(int i=n-2;i>=0;i--){
		for(int j=m-2;j>=0;j--){
			A[i][j]=A[i][j]+min(A[i+1][j],A[i][j+1]);
		}
	}
	return A[0][0];
}
int main(){
	int n,m;
	cin >> n;
	cin >> m;	
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
	cout << endl ;
	int sol=health(A);
	cout << sol << endl;
	return 0;
}