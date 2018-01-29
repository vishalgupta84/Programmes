#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	for(i=0;i<n;i++){
		int quantity,price;
		cin >> quantity;
		cin >> price;
		long long int total=quantity*price;
		double discout,sum;
		sum=(double)total;
		if(quantity>1000){
			discout=(double)((double)total/10.0);
			sum=(double)((double)total-discout);
		}
		cout << std::setprecision(6)<< std::fixed;
		cout << sum << endl;
	}
	return 0;
}