<<<<<<< HEAD
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
int selectionSort(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		int minimum=A[i];
		int idx=i;
		//cout << A[i] << " ";
		for (int j = i+1; j < A.size(); ++j)
		{
			/* code */
			if(A[j]<minimum){
				minimum=A[j];
				idx=j;
			}
		}
		//cout << A[i] << " ";
		if(idx!=i)
		swap(A[i],A[idx]);
		
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
	selectionSort(A);
	//print(A);
	return 0;
=======
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
int selectionSort(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		int minimum=A[i];
		int idx=i;
		//cout << A[i] << " ";
		for (int j = i+1; j < A.size(); ++j)
		{
			/* code */
			if(A[j]<minimum){
				minimum=A[j];
				idx=j;
			}
		}
		//cout << A[i] << " ";
		if(idx!=i)
		swap(A[i],A[idx]);
		
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
	selectionSort(A);
	//print(A);
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}