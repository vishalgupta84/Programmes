#include<iostream>
using namespace std;
int main(int argc, char const *argv[]){
	int n;
	cin >> n;
	while(n--){
		int num,c=0;
		for (int i = 0; i < 5; ++i){
			/* code */
			cin >> num;
			if(num)
				c++;
		}
		if(c==0){
			cout << "Beginner\n";
		}
		if(c==1){
			cout << "Junior Developer\n";
		}
		if(c==2){
			cout << "Middle Developer\n";
		}
		if(c==3){
			cout << "Senior Developer\n";
		}
		if(c==4){
			cout << "Hacker\n";
		}
		if(c==5){
			cout << "Jeff Dean\n";
		}
	}
	return 0;
}