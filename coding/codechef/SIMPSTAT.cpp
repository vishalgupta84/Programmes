#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[]){
	int t,n,k;
	double ans;
	cin >> t;
	std::vector<int> num;
	while(t--){
		cin >> n >> k;
		num.resize(n);
		for (int i = 0; i < n; ++i){
			/* code */
			cin >> num[i];
		}
		sort(num.begin(),num.end());
		ans=0;
		for (int i = k; i <= n-1-k; ++i){
			/* code */
			ans+=num[i];
		}
		ans=(double)(ans/(n-2*k));
		cout << fixed;
		cout << setprecision(6) << ans << endl;
	}
	return 0;
}