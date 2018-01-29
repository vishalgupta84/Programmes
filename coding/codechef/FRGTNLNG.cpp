#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[]){
	int t,n,k,num;
	std::vector<std::vector<string> > input;
	std::vector<string> tokens;
	cin >> t;
	while(t--){
		cin >> n >> k;
		tokens.resize(n);
		input.resize(k);
		for (int i = 0; i < n; ++i){
			cin >> tokens[i];
		}
		for (int i = 0; i < k; ++i){
			cin >> num ;
			input[i].resize(num);
			for (int j = 0; j < num; ++j){
				cin >> input[i][j];
			}
		}
		for (int i = 0; i < n; ++i){
			bool flag=false;
			for(int j=0;j<k;j++){
				for(int l=0;l<input[j].size();l++){
					if(tokens[i]==input[j][l])
						flag=true;
				}
			}
			if(flag)
				cout << "YES ";
			else
				cout << "NO ";
		}
		cout << endl;
	}
	return 0;
}