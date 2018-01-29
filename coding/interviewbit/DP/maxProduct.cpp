<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProduct(std::vector<int> A){
	if(A.empty())
		return 0;
	if(A.size()==1)
		return A[0];
	int ans=A[0];
	int prev_max=A[0],prev_min=A[0];
	for(int i=1;i<A.size();i++){
		int cur_max=max(max(prev_max*A[i],prev_min*A[i]),A[i]);
		int cur_min=min(min(prev_max*A[i],prev_min*A[i]),A[i]);
		ans=max(ans,cur_max);
		prev_max=cur_max;
		prev_min=cur_min;
	}
	return ans;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int sol=maxProduct(A);
	cout << sol <<endl;
	return 0;
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProduct(std::vector<int> A){
	if(A.empty())
		return 0;
	if(A.size()==1)
		return A[0];
	int ans=A[0];
	int prev_max=A[0],prev_min=A[0];
	for(int i=1;i<A.size();i++){
		int cur_max=max(max(prev_max*A[i],prev_min*A[i]),A[i]);
		int cur_min=min(min(prev_max*A[i],prev_min*A[i]),A[i]);
		ans=max(ans,cur_max);
		prev_max=cur_max;
		prev_min=cur_min;
	}
	return ans;
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int sol=maxProduct(A);
	cout << sol <<endl;
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}