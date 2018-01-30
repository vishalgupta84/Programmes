#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Form
{
	int i,j;
	int sum;
};
typedef struct Form form;
std::vector<int> solution(std::vector<int> A){
	std::vector<int> result;
	int n=(A.size()*(A.size()-1))/2;
	vector<form> temp(n);
	if(A.size()<4)
		return result;
	int k=0;
	for (int i = 0; i < A.size(); ++i)
	{
		for(int j=i+1;j<A.size();j++){
			temp[k].sum=A[i]+A[j];
			temp[k].i=i;
			temp[k].j=j;
			k++;
		}
	}
	map<int,form> mp;
	map<int ,form> ::iterator it;
	for (int i = 0; i < temp.size(); ++i){
		int key=temp[i].sum;
		it=mp.find(key);
		if(it!=mp.end()){
			int first=it->second.i;
			int second=it->second.j;
			int third=temp[i].i;
			int fourth=temp[i].j;
			result.push_back(first);
			result.push_back(second);
			result.push_back(third);
			result.push_back(fourth);
			return result;
		}
		mp.insert(pair<int,form>(key,temp[i]));
	}
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
	std::vector<int> v=solution(A);
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout << v[i] << " ";
	}
	cout << endl;
	return 0;
}