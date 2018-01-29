#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	string a , b;
	cin >> t;
	while(t--){
		cin >> a >> b;
		bool flag=false;
		bool ch[26]={false};
		for (int i = 0; i < a.size(); ++i){
			int val=((int)a[i]-97);
			ch[val]=true;
		}
		for (int i = 0; i < b.size(); ++i){
			/* code */
			int val=((int)b[i]-97);
			if(ch[val])
				flag=true;
		}
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}