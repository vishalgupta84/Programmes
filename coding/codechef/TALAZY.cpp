#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
	// int t,m,b,n;
	long long unsigned int sum,t,m,b,n;
	cin >> t;
	while(t--){
		sum=0;
		cin >> n >> b >> m;
		while(n){
			int done;
			if(n%2==0){
				done=n/2;
			}
			else
				done=(n+1)/2;
			n=n/2;
			sum=sum+done*m;
			m=2*m;
			if(n)
			sum+=b;
			// cout << done << " " << m << " " << n << " " << " " << sum<<endl;
		}
		cout << sum <<endl;
	}
	return 0;
}