<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(std::vector<int> A){
	int ans=0;
	for(int i=0;i<A.size()-1;i++){
		if(A[i]<A[i+1])
			ans=ans+A[i+1]-A[i];
	}
	return ans;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int profit=maxProfit(A);
	cout << profit <<endl;
	return 0;
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(std::vector<int> A){
	int ans=0;
	for(int i=0;i<A.size()-1;i++){
		if(A[i]<A[i+1])
			ans=ans+A[i+1]-A[i];
	}
	return ans;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int profit=maxProfit(A);
	cout << profit <<endl;
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}