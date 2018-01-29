#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,f1=0,f2=0;
		cin >> n;
		while(n--){
			char ch;
			cin >> ch;
			if(ch=='Y')
				f1=1;
			if(ch=='I')
				f2=1;
		}
		if((f1!=1)&&(f2!=1))
			cout << "NOT SURE" << endl;
		else if((f1!=1)&&(f2==1))
			cout << "INDIAN" << endl;
		else if((f1==1)&&(f2!=1))
			cout << "NOT INDIAN" << endl;
		else if((f1==1)&&(f2==1))
			cout << "NOT SURE" << endl;
	}
	return 0;
}