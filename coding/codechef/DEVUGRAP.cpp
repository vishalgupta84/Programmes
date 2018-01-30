#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t;
	long long int n,k,sum=0,num,rem;
	std::vector<long int> number;
	cin >> t;
	while(t--){
		sum=0;
		cin >> n >> k;
		// number.resize(n);
		for (int i = 0; i < n; ++i){
			cin >> num;
			rem= num % k;
			if(num>=k)
				rem=min(rem,(k-rem));
			else
				rem=(k-rem);
			sum = sum + rem;
		}
		cout << sum << endl;
	}
	return 0;
}