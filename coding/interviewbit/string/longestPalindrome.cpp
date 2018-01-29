<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string palindrome(string str){
	if(str.size()==0)
		return "";
	int len=str.size();
	int start=0;
	int length=1;
	int i,low,high;
	for (i=1;i<len;i++)
	{
		low=i-1;
		high=i;
		while(low>=0&&high<len&&(str[low]==str[high])){
			if(length<high-low+1){
				start=low;
				length=high-low+1;
			}
			low--;
			high++;
		}

		low=i-1;
		high=i+1;
		while(low>=0&&high<len&&(str[low]==str[high])){
			if(length<high-low+1){
				start=low;
				length=high-low+1;
			}
			low--;
			high++;
		}
	}	
	string result="";
	for(int i=0;i<length;i++)
		result=result+string(1,str[start+i]);
	return result;
}
int main(){
	int n;
	//cin >> n;	
	string str;
	cin >> str;
	string res=palindrome(str);
	cout << res<<endl;
	return 0;
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string palindrome(string str){
	if(str.size()==0)
		return "";
	int len=str.size();
	int start=0;
	int length=1;
	int i,low,high;
	for (i=1;i<len;i++)
	{
		low=i-1;
		high=i;
		while(low>=0&&high<len&&(str[low]==str[high])){
			if(length<high-low+1){
				start=low;
				length=high-low+1;
			}
			low--;
			high++;
		}

		low=i-1;
		high=i+1;
		while(low>=0&&high<len&&(str[low]==str[high])){
			if(length<high-low+1){
				start=low;
				length=high-low+1;
			}
			low--;
			high++;
		}
	}	
	string result="";
	for(int i=0;i<length;i++)
		result=result+string(1,str[start+i]);
	return result;
}
int main(){
	int n;
	//cin >> n;	
	string str;
	cin >> str;
	string res=palindrome(str);
	cout << res<<endl;
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}