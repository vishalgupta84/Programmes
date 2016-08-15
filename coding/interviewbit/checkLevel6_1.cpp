#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int countInversion(std::vector<int> A){
	set<int> tree;
	//cout << " hikj";
	int ans=0;
	pair<set<int>::iterator,bool> it;
	tree.insert(A[0]);
	for (int i = 1; i < A.size(); ++i)
	{
		/* code */
		it=tree.insert(A[i]);
		//int idx=it.first;
		int s=distance(tree.find(A[i]),tree.end());//tree.size();
		//cout << s;
		ans=ans+s-1;
		//cout << i;
	}
	return ans;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int sol=countInversion(A);
	cout << sol<<endl;
	return 0;
}