#include<iostream>
#include<bits/stdc++.h>
using namespace std;
std::vector<int> window(std::vector<int> A,int k){
	deque<int> w(k);
	std::vector<int> result;
	if(A.size()<k)
		return result;
	int i;
	for(i=0;i<k;i++){
		while((!w.empty())&&A[i]>=A[w.back()])
			w.pop_back();
		w.push_back(i);
	}
	for(;i<A.size();i++){
		result.push_back(A[w.front()]);
		//cout << A[w.front()] << " ";
		while((!w.empty())&&w.front()<=(i-k))
			w.pop_front();
		while((!w.empty())&&A[i]>=A[w.back()])
			w.pop_back();
		w.push_back(i);
	}
	result.push_back(A[w.front()]);
	return result;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int k;
	cin >> k;
	std::vector<int> result=window(A,k);
	//cout << result.size();
	for (int i = 0; i < result.size(); ++i)
	{
		/* code */
		cout << result[i] << " ";
	}
	return 0;
}