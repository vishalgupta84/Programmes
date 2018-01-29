#include<iostream>
#include<bits/stdc++.h>
using namespace std;
std::vector<int> permute(std::vector<int> A){
	for(int k=0;k<999999;k++){
	int i=A.size()-2;
	while(i>=0&&A[i]>A[i+1])
		i--;
	int j=A.size()-1;
	while(j>i){
		if(A[j]>A[i])
			break;
		j--;
	}
	swap(A[i],A[j]);
	sort(A.begin()+i+1,A.end());
	}
	return A;
}
int main(){	
	vector<int> A(10);
	for(int i=0;i<10;i++)
		A[i]=i;
	std::vector<int> v=permute(A);
	for(int i=0;i<10;i++)
		cout << v[i];
	cout << endl;
	return 0;
}