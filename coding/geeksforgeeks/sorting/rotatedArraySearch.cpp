<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(std::vector<int> A,int key){
	int low=0,high=A.size()-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(A[mid]==key)
			return mid;
		if(A[low]<=A[mid]){
			if(key>=A[low]&&key<=A[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		else{
			if(key>=A[mid]&&key<=A[high])
				low=mid+1;
			else
				high=mid-1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> A[i];
	}
	int key;
	cin >> key;
	int res=search(A,key);
	cout << res;
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(std::vector<int> A,int key){
	int low=0,high=A.size()-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(A[mid]==key)
			return mid;
		if(A[low]<=A[mid]){
			if(key>=A[low]&&key<=A[mid])
				high=mid-1;
			else
				low=mid+1;
		}
		else{
			if(key>=A[mid]&&key<=A[high])
				low=mid+1;
			else
				high=mid-1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	std::vector<int> A(n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> A[i];
	}
	int key;
	cin >> key;
	int res=search(A,key);
	cout << res;
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}