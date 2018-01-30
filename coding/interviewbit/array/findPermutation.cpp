<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(std::vector<int> A){
	for (int i = 0; i < A.size(); ++i)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
std::vector<int> findPermutation(int n,string str){
	int max=1,min=1;
	std::vector<int> result(1,1);
	for(int i=0;i<str.size();i++){
		if(str[i]=='D'){
			result.push_back(min-1);
			min--;
		}
		else if(str[i]=='I'){
			result.push_back(max+1);
			max++;
		}
	}
	if(min<=0){
		for (int i = 0; i < result.size(); ++i)
		{
			/* code */
			result[i]=result[i]+abs(min)+1;
		}
	}
	return result;
}
int main(){
	int n;
	cin >> n;
	string str;
	cin >>str;	
	std::vector<int> A=findPermutation(n,str);
	print(A);
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
		cout << A[i] << " ";
	}
	cout << endl;
}
std::vector<int> findPermutation(int n,string str){
	int max=1,min=1;
	std::vector<int> result(1,1);
	for(int i=0;i<str.size();i++){
		if(str[i]=='D'){
			result.push_back(min-1);
			min--;
		}
		else if(str[i]=='I'){
			result.push_back(max+1);
			max++;
		}
	}
	if(min<=0){
		for (int i = 0; i < result.size(); ++i)
		{
			/* code */
			result[i]=result[i]+abs(min)+1;
		}
	}
	return result;
}
int main(){
	int n;
	cin >> n;
	string str;
	cin >>str;	
	std::vector<int> A=findPermutation(n,str);
	print(A);
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}