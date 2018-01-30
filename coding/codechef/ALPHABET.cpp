#include<iostream>
using namespace std;
bool calculate(string letter, string words){
	// bool table[256]={false};
	// for(int i=0;i<letter.size();i++){
	// 	int idx=(int)letter[i];
	// 	table[idx]=true;
	// }
	// for(int i=0;i<words.size();i++){
	// 	int idx=(int)words[i];
	// 	if(!table[idx])
	// 		return false;
	// }
	// return true;
	for(int i=0;i<words.size();i++){
		bool flag=false;
		for(int j=0;j<letter.size();j++){
			if(words[i]==letter[j])
				flag=true;
		}
		if(!flag)
			return false;
	}
	return true;
}
int main(){
	string letter,words;
	int n;
	cin >> letter;
	cin >> n;
	while(n--){
		cin >> words;
		bool flag=calculate(words,letter);
		if(flag)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}