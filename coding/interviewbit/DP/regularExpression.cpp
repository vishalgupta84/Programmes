<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool match(char *s,char *p){
	char *star=NULL;
	char *ss=s;
	while(*s){
		if((*p=='?')||(*p==*s)){
			p++;
			s++;
			continue;
		}
		if(*p=='*'){
			star=p++;
			ss=s;
			continue;
		}
		if(star){
			p=star+1;
			s=++ss;
			continue;
		}
		return false;
	}
	while(*p!='\0'&&*p=='*')
		p++;
	if(*p=='\0')
		return  true;
	return false;
}
int main(){
	//int n;
	//cin >> n;	
	char s[100],p[100];
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> s[i];
	}
	s[n]='\0';
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin >> p[i];
	}
	p[m]='\0';
	//cin >> s >> p;
	//cout << s <<endl << p << endl;
	bool flag=match(s,p);
	cout << flag <<endl;
	return 0;
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool match(char *s,char *p){
	char *star=NULL;
	char *ss=s;
	while(*s){
		if((*p=='?')||(*p==*s)){
			p++;
			s++;
			continue;
		}
		if(*p=='*'){
			star=p++;
			ss=s;
			continue;
		}
		if(star){
			p=star+1;
			s=++ss;
			continue;
		}
		return false;
	}
	while(*p!='\0'&&*p=='*')
		p++;
	if(*p=='\0')
		return  true;
	return false;
}
int main(){
	//int n;
	//cin >> n;	
	char s[100],p[100];
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> s[i];
	}
	s[n]='\0';
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin >> p[i];
	}
	p[m]='\0';
	//cin >> s >> p;
	//cout << s <<endl << p << endl;
	bool flag=match(s,p);
	cout << flag <<endl;
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}