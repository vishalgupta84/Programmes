#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string evalute(std::vector<string> A){
	string str;
	if(A.size()==0)
		return str;
	int mn=A[0].size();
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		if(mn>A[i].size())
			mn=A[i].size();
	}
	
	for (int i = 0; i < mn; ++i)
	{
		/* code */
		char cur=A[0][i];
		for(int j=1;j<A.size();j++)
			if(A[j][i]!=cur)
				return str;
		str.push_back(cur);
	}
	return str;
}
int main(){
	int n;
	cin >> n;
	std::vector<string> A(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> A[i];
	}
	string str=evalute(A);
	cout << str;
	return 0;
}