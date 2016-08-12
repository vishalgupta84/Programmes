#include<iostream>
#include<bits/stdc++.h>
using namespace std;
std::vector<int> evalute(std::vector<int> A,int B){
	if(B==0||B==1)
		return A;
	std::vector<int> result;
	if(B>A.size())
		B=A.size();
	deque<int> qe(B);
	int i;
	for(i=0;i<B;i++){
		while(!qe.empty()&&A[i]>=A[qe.back()])
			qe.pop_back();
		qe.push_back(i);
	}
	for(;i<A.size();i++){
		result.push_back(A[qe.front()]);
		while(!qe.empty()&&qe.front()<=(i-B))
			qe.pop_front();
		while(!qe.empty()&&A[i]>=A[qe.back()])
			qe.pop_back();
		qe.push_back(i);
	}
	result.push_back(A[qe.front()]);
	return result;
}
int main(){
	int n;
	cin >> n;
	std::vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int B;
	cin >> B;
	std::vector<int> result=evalute(A,B);
	for (int i = 0; i < result.size(); ++i)
	{
		/* code */
		cout << result[i] << " ";
	}
	return 0;
}