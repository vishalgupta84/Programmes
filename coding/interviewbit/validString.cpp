#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int evalute(string str){
	stack<char> s;
	for (int i = 0; i < str.size(); ++i)
	{
		/* code */
		if(str[i]=='(')
			s.push(str[i]);
		if(str[i]=='[')
			s.push(str[i]);
		if(str[i]=='{')
			s.push(str[i]);
		if(str[i]==')'){
			if(s.empty())
				return 0;
			char ch=s.top();
			if(ch=='(')
				s.pop();
			else
				return 0;
		}
		if(str[i]==']'){
			if(s.empty())
				return 0;
			char ch=s.top();
			if(ch=='[')
				s.pop();
			else
				return 0;
		}
		if(str[i]=='}'){
			if(s.empty())
				return 0;
			char ch=s.top();
			if(ch=='{')
				s.pop();
			else
				return 0;
		}
	}
	if(s.empty())
		return 1;
	return 0;
}
int main(){
	int n;
	//cin >> n;
	string str;
	cin >> str;
	int res=evalute(str);
	cout << res;
	return 0;
}