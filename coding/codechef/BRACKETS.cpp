#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t,n,bal;
	string br;
	cin >> t;
	while(t--){
		cin >> br;
		int mx=-1;
		bal=0;
		int len=br.size();
		for(int i=0;i<len;i++){
			if(br[i]=='(')
				bal++;
			if(br[i]==')')
				bal--;
			mx=max(mx,bal);
		}
		for(int i=0;i<mx;i++)
			cout << "(";
		for(int i=0;i<mx;i++)
			cout << ")";
		cout << endl;
	}
	return 0;
}