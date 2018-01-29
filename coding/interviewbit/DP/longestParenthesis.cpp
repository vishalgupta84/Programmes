<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longest(string str){
	stack<int> s;
	int last=-1;
	int maxLen=0;
	for (int i = 0; i < str.size(); ++i)
	{
		/* code */
		if(str[i]=='(')
			s.push(i);
		else{
			if(s.empty())
				last=i;
			else{
				s.pop();
				if(s.empty())
					maxLen=max(maxLen,i-last);
				else
					maxLen=max(maxLen,i-s.top());
			}
		}
	}
	return maxLen;
}
int main(){
	int n;
	//cin >> n;	
	string str;
	cin >> str;
	int sol=longest(str);
	cout << sol << endl;
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int longest(string str){
	stack<int> s;
	int last=-1;
	int maxLen=0;
	for (int i = 0; i < str.size(); ++i)
	{
		/* code */
		if(str[i]=='(')
			s.push(i);
		else{
			if(s.empty())
				last=i;
			else{
				s.pop();
				if(s.empty())
					maxLen=max(maxLen,i-last);
				else
					maxLen=max(maxLen,i-s.top());
			}
		}
	}
	return maxLen;
}
int main(){
	int n;
	//cin >> n;	
	string str;
	cin >> str;
	int sol=longest(str);
	cout << sol << endl;
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}