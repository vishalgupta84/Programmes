#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; ++i){
		cin >> A[i];
	}
	int ret=maxDistance(A);
	return 0;
}