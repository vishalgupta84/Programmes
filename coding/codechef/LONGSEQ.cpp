#include <iostream>
// #include <vector>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[]){
	int t,z,o;
	string number;
	cin >> t;
	while(t--){
		cin >> number;
		z=o=0;
		for(int i=0;i<number.size();i++){
			if(number[i]=='0')
				o++;
			if(number[i]=='1')
				z++;
		}
		if(z==1||o==1)
			cout << "Yes" << endl;
		else
			cout << "No\n";
	}
	return 0;
}