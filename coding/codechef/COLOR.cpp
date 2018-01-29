#include <iostream>
// #include <vector>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[]){
	int t,n,r,g,b,m;
	string color;
	cin >> t;
	while(t--){
		cin >> n;
		cin >> color;
		r=g=b=0;
		for(int i=0;i<n;i++){
			if(color[i]=='R')
				r++;
			if(color[i]=='G')
				g++;
			if(color[i]=='B')
				b++;
			m = max(max(r,g),b);
		}
		cout << (n-m) << endl;
	}
	return 0;
}