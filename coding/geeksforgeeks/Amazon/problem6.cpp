#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int solution(std::vector<int> A){
	int len=A.size();
	int m=0;
	for(int k=0;k<len;k++){
		int sum=0;
		for(int i=0;i<len;i++){
			int pos=(i+k)%len;
			sum=sum+pos*A[i];
		}
		if(sum>m)
			m=sum;
	}
	return m;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int sum=solution(A);
	cout << sum <<endl;
	return 0;
}