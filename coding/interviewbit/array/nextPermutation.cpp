<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
	return a>b;
}
void print(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
std::vector<int> nextPermutation(std::vector<int> A){
	if(A.size()==0)
		return A;
	int i=A.size()-2;
	while(i>=0&&A[i]>A[i+1])
		i--;
	if(i<0){
		sort(A.begin(),A.end());
		return A;
	}
	int j=A.size()-1;
	while(j>i){
		if(A[j]>A[i])
			break;
		j--;
	}
	swap(A[i],A[j]);
	sort(A.begin()+i+1,A.end());
	return A;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	print(A);
	std::vector<int> result=nextPermutation(A);
	print(result);
	return 0;
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
	return a>b;
}
void print(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
std::vector<int> nextPermutation(std::vector<int> A){
	if(A.size()==0)
		return A;
	int i=A.size()-2;
	while(i>=0&&A[i]>A[i+1])
		i--;
	if(i<0){
		sort(A.begin(),A.end());
		return A;
	}
	int j=A.size()-1;
	while(j>i){
		if(A[j]>A[i])
			break;
		j--;
	}
	swap(A[i],A[j]);
	sort(A.begin()+i+1,A.end());
	return A;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	print(A);
	std::vector<int> result=nextPermutation(A);
	print(result);
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}