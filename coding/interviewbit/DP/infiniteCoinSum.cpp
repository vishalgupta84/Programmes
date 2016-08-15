#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int calculate(std::vector<int> A,int sum){
	std::vector<int> table(sum+1,0);
	//memset(table,0,sizeof(table));
	table[0]=1;
	for(int i=0;i<A.size();i++)
		for(int j=A[i];j<=sum;j++)
			table[j]+=table[j-A[i]];
	return table[sum];

}
int main(){
	int n;
	cin >> n;	
	std::vector<int> A(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> A[i];
	}
	int sum;
	cin >> sum;
	int sol=calculate(A,sum);
	cout << sol <<endl;
	return 0;
}