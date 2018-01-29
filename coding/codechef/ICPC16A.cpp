#include <iostream>
// #include <vector>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[]){
	int t,x1,x2,y1,y2;
	cin >> t;
	while(t--){
		cin >> x1 >> y1 >> x2 >> y2 ;
		if(y1==y2){
			if(x1<x2)
				cout << "right\n";
			if(x2<x1)
				cout << "left\n";
		}
		else if(x1==x2){
			if(y1<y2)
				cout << "up\n";
			if(y2<y1)
				cout << "down\n";
		}
		else
			cout << "sad\n";
	}
	return 0;
}