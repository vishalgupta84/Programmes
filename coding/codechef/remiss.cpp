#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int n;
	cin >>n;
	while(n--){
		int a,b;
		cin >> a >> b;
		cout << max(a,b) << " " << (a+b) << endl;
	}
	return 0;
}