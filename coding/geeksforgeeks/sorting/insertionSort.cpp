<<<<<<< HEAD
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
int insertionSort(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		int j=i-1;
		int tmp=A[i];
		while(j>=0&&A[j]>tmp){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=tmp;
		//print(A);
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
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
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
		int j=i-1;
		int tmp=A[i];
		while(j>=0&&A[j]>tmp){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=tmp;
		//print(A);
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
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}