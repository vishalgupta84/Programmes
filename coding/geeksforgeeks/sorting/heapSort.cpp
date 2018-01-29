<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int heapify(int* A,int idx,int n){
	int left=idx*2+1;
	int right=idx*2+2;
	int large=idx;
	if(left<n&&A[left]>A[idx])
		large=left;
	if(right<n&&A[right]>A[large])
		large=right;
	if(large!=idx){
		swap(A[idx],A[large]);
		heapify(A,large,n);
	}

}
int heapSort(int* A,int n){
	for(int i=n/2-1;i>=0;i--)
		heapify(A,i,n);
	for(int i=n-1;i>=0;i--){
		swap(A[0],A[i]);
		heapify(A,0,i);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << A[i] << ' ';
	}
}
int main(){
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	heapSort(A,n);
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int heapify(int* A,int idx,int n){
	int left=idx*2+1;
	int right=idx*2+2;
	int large=idx;
	if(left<n&&A[left]>A[idx])
		large=left;
	if(right<n&&A[right]>A[large])
		large=right;
	if(large!=idx){
		swap(A[idx],A[large]);
		heapify(A,large,n);
	}

}
int heapSort(int* A,int n){
	for(int i=n/2-1;i>=0;i--)
		heapify(A,i,n);
	for(int i=n-1;i>=0;i--){
		swap(A[0],A[i]);
		heapify(A,0,i);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << A[i] << ' ';
	}
}
int main(){
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> A[i];
	}
	heapSort(A,n);
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}