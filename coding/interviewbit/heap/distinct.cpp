#include<iostream>
#include<bits/stdc++.h>
using namespace std;
std::vector<int> solution(std::vector<int> A,int k){
	map<int ,int> mp;
	std::vector<int> result;
	if(A.size()<k)
		return result;
	int c=0;
	for (int i = 0; i < k; ++i)
	{
		/* code */
		if(mp[A[i]]==0)
			c++;
		mp[A[i]]++;
	}
	result.push_back(c);
	for (int i = k; i < A.size(); ++i)
	{
		/* code */
		if(mp[A[i-k]]==1)
			c--;
		mp[A[i-k]]--;
		if(mp[A[i]]==0)
			c++;
		mp[A[i]]++;
		result.push_back(c);
	}
	return result;
}
int main(){
	int n,k;
	cin >> n>>k;
	std::vector<int> A(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */cin>> A[i];
	}
	std::vector<int> v=solution(A,k);
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout << v[i] << " ";
	}
	return 0;
}