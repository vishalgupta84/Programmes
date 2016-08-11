#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void func(vector<int> &A,vector<int> &cur,vector<vector<int> > &ret,int k){
	if(k==A.size()){
		ret.push_back(cur);
		return ;
	}
	func(A,cur,ret,k+1);
	cur.push_back(A[k]);
	func(A,cur,ret,k+1);
	cur.pop_back();
}
bool compare(int a,int b){
	return a<b;
}
vector<vector<int> > evalute(std::vector<int>A){
	vector<vector<int> > ret;
	sort(A.begin(),A.end(),compare);
	vector<int> cur;
	func(A,cur,ret,0);
	sort(ret.begin(),ret.end());
	for(int i=1;i<ret.size();i++)
		if(ret[i]==ret[i-1])
			ret.erase(ret.begin()+i);
	return ret;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	vector<vector<int> > ret=evalute(A);
	for(int i=0;i<ret.size();i++){
		for(int j=0;j<ret[i].size();j++)
			cout << ret[i][j] << " ";
		cout << endl;
	}
	return 0;
}