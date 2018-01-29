<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(std::vector<int> A){
	int small=A[0];
	int profit=0;
	for (int i = 1; i < A.size(); ++i)
	{
		/* code */
		small=min(small,A[i]);
		profit=max(profit,A[i]-small);
	}
	return profit;
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
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxProfit(std::vector<int> A){
	int small=A[0];
	int profit=0;
	for (int i = 1; i < A.size(); ++i)
	{
		/* code */
		small=min(small,A[i]);
		profit=max(profit,A[i]-small);
	}
	return profit;
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
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}