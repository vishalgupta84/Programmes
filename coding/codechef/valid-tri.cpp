#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int i,sum=0;
		for(i=0;i<3;i++){
			int j;
			cin >> j;
			if(j==0){
				cout << "NO\n";
				sum=-1;
				break;
			}
			sum=sum+j;
		}
		if(sum==180)
			cout << "YES\n";
		else if(sum!=-1)
			cout << "NO\n";
	}
	return 0;
}