#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		cout << A[i] << " ";
	}
}
int insertionSort(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		int j=i;
		while(j>0&&A[j]>A[i])
			A[j]=A[j-1];
		A[j]=A[i];
	}
	print(A);
}
int main(){
	int n;
	cin >> n;
	std::vector<int> A(n);
	cout << "enter array\n";
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> A[i];
	}
	cout << "usorted array\n";
	print(A);
	cout << "\nsorted array\n";
	insertionSort(A);
	//print(A);
	return 0;
}