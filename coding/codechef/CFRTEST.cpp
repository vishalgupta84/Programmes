#include <iostream>
// #include <vector>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[]){
	int t,n,num;
	bool day[101];
	cin >> t;
	while(t--){
		cin >> n;
		for (int i = 0; i < 101; ++i){
			day[i]=false;
		}
		for (int i = 0; i < n; ++i){
			cin >> num ;
			day[num]=true;
		}
		num=0;
		for(int i=1;i<101;i++){
			if(day[i])
				num++;
		}
		cout << num <<endl;
	}
	return 0;
}