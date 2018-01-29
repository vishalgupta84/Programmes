#include<iostream>
#include<cstdlib>
using namespace std;
int find_gcd(int a,int b){
	if(a<b)
		find_gcd(b,a);
	while(a%b!=0){
		int tmp=b;
		b=a%b;
		a=tmp;
	}
	return b;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,i;
		cin >> n;
		int arr[n];
		for(i=0;i<n;i++)
			cin >> arr[i];
		int gcd=arr[0];
		for(i=1;i<n;i++)
			gcd=find_gcd(arr[i],gcd);
		for(i=0;i<n;i++)
			arr[i]=arr[i]/gcd;
		for(i=0;i<n;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
}
