#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(std::vector<int> A){
	int ans=0;
	for(int i=0;i<A.size()-1;i++){
		if(A[i]<A[i+1])
			ans=ans+A[i+1]-A[i];
	}
	return ans;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int profit=maxProfit(A);
	cout << profit <<endl;
	return 0;
}