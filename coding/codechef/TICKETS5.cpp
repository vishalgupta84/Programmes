#include <iostream>
using namespace std;
bool check(string s){
	char f=s[0];
	char o=s[1];
	if(f==o)
		return false;
	int len=s.size();
	if(len%2)
		return false;
	for(int i=0;i+2<len;i++){
		if(s[i]!=s[i+2])
			return false;
	}
	return true;
}
int main(int argc, char const *argv[]){
	int t;
	// long long unsigned int sum,t,m,b,n;
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		if(check(s))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}