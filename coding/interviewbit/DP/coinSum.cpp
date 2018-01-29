<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int coinSum(std::vector<int> A){
	if(A.empty())
    return 0;
    if(A.size()==1)
    return A[0];
    int table[A.size()][A.size()];
	for(int k=0;k<A.size();k++){
		for(int i=0;(i+k)<=A.size();i++){
			for(int i=0, j=k;j<A.size();i++,j++){
				int x=(i+2)<j?table[i+2][j]:0;
				int y=(i<j-2)?table[i][j-2]:0;
				int z=(i+1<j-1)?table[i+1][j-1]:0;
				int ans=max(A[i]+min(x,z),A[j]+min(y,z));
				table[i][j]=ans;
			}
		}
	}
	return table[0][A.size()-1];
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int sum=coinSum(A);
	cout << sum <<endl;
	return 0;
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int coinSum(std::vector<int> A){
	if(A.empty())
    return 0;
    if(A.size()==1)
    return A[0];
    int table[A.size()][A.size()];
	for(int k=0;k<A.size();k++){
		for(int i=0;(i+k)<=A.size();i++){
			for(int i=0, j=k;j<A.size();i++,j++){
				int x=(i+2)<j?table[i+2][j]:0;
				int y=(i<j-2)?table[i][j-2]:0;
				int z=(i+1<j-1)?table[i+1][j-1]:0;
				int ans=max(A[i]+min(x,z),A[j]+min(y,z));
				table[i][j]=ans;
			}
		}
	}
	return table[0][A.size()-1];
}
int main(){
	int n;
	cin >> n;	
	vector<int> A(n);
	for(int i=0;i<n;i++)
		cin >> A[i];
	int sum=coinSum(A);
	cout << sum <<endl;
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}