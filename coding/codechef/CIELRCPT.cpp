#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int p;
		cin >> p;
		int count=p/2048;
		p=p%2048;
		while(p!=0){
			int rm=p%2;
			p=p/2;
			if(rm==1)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}