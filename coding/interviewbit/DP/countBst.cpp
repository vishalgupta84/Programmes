<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long int countBST(int n,int h){
	//int table[]
	std::vector<std::vector<int> > table(h+1,std::vector<int>(n+1));
	table[0][1]=1;
	for (int i = 2; i <= n; ++i)
	{
		/* code */
		table[0][i]=0;
	}
	for (int i = 0; i <= h; ++i)
	{
		/* code */
		table[i][0]=1;
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++)
			table[i][j]=(table[i-1][j-1]*table[i-1][n-j])%mod;
	}
	return table[h][n];
}
int main(){
	int n;
	cin >> n;	
	int h;
	cin >> h;
	long int sol=countBST(n,h);
	cout << sol <<endl;
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
long int countBST(int n,int h){
	//int table[]
	std::vector<std::vector<int> > table(h+1,std::vector<int>(n+1));
	table[0][1]=1;
	for (int i = 2; i <= n; ++i)
	{
		/* code */
		table[0][i]=0;
	}
	for (int i = 0; i <= h; ++i)
	{
		/* code */
		table[i][0]=1;
	}
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++)
			table[i][j]=(table[i-1][j-1]*table[i-1][n-j])%mod;
	}
	return table[h][n];
}
int main(){
	int n;
	cin >> n;	
	int h;
	cin >> h;
	long int sol=countBST(n,h);
	cout << sol <<endl;
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}