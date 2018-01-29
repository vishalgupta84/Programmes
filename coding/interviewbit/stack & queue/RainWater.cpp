<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> A){
	for(int i=0;i<A.size();i++)
		cout << A[i] <<" ";
	cout << endl;
}
int max(int a,int b){
	return ((a>b)?a:b);
}
int min(int a,int b){
	return ((a<b)?a:b);
}
int evalute(vector<int> A){
	int sum=0;
	vector<int> left(A.size());
	vector<int> right(A.size());
	left[0]=A[0];
	right[A.size()-1]=A[A.size()-1];
	for(int i=1;i<A.size();i++)
		left[i]=max(left[i-1],A[i]);
	for(int i=A.size()-2;i>=0;i--)
		right[i]=max(right[i+1],A[i]);
	for(int i=0;i<A.size();i++)
		sum=sum+min(left[i],right[i])-A[i];
	//print(A);
	//print(left);
	//print(right);
	return sum;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int res=evalute(A);
	cout << res;
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int> A){
	for(int i=0;i<A.size();i++)
		cout << A[i] <<" ";
	cout << endl;
}
int max(int a,int b){
	return ((a>b)?a:b);
}
int min(int a,int b){
	return ((a<b)?a:b);
}
int evalute(vector<int> A){
	int sum=0;
	vector<int> left(A.size());
	vector<int> right(A.size());
	left[0]=A[0];
	right[A.size()-1]=A[A.size()-1];
	for(int i=1;i<A.size();i++)
		left[i]=max(left[i-1],A[i]);
	for(int i=A.size()-2;i>=0;i--)
		right[i]=max(right[i+1],A[i]);
	for(int i=0;i<A.size();i++)
		sum=sum+min(left[i],right[i])-A[i];
	//print(A);
	//print(left);
	//print(right);
	return sum;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int res=evalute(A);
	cout << res;
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}