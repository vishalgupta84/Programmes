#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int b;
		cin >> b;
		long int val=((b/2)*((b/2)-1))/2;
		cout << val << endl;
	}
	return 0;
}