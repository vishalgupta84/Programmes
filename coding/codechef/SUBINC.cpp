#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]){
	int t,n;
	cin >> t;
	std::vector<int> num,sum;
	while(t--){
		cin >> n;
		num.resize(n);
		sum.resize(n);
		sum[0]=1;
		for (int i = 0; i < n; ++i){
			cin >> num[i];
		}
		for (int i = 1; i < n; ++i){
			if(num[i-1]<=num[i])
				sum[i]=sum[i-1]+1;
			else
				sum[i]=1;
		}
		long long int res=0;
		for (int i = 0; i < n; ++i){
			res+=sum[i];
		}
		cout << res <<endl;
	}
	return 0;
}