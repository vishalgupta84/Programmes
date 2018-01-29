#include<bits/stdc++.h>
using namespace std;
class noble_integer
{
	std::vector<int> A;
public:
	noble_integer(int n);
	int solution();
};
noble_integer::noble_integer(int n){
	A.resize(n);
	for (int i = 0; i < n; ++i){
		cin >> A[i];
	}
}
int noble_integer::solution(){
	sort(A.begin(),A.end());
	for(int i=0;i<A.size();i++){
		int diff=A.size()-1-i;
		int j=i+1;
		while((j<A.size())&&A[j]==A[i]){
			j++;
		}
		diff=diff-(j-i-1);
		if(A[i]==diff)
			return 1;
	}
	return -1;
}
int main(){
	int n;
	cin >> n;
	noble_integer noble(n);
	int result=noble.solution();
	cout << result <<endl;
	return 0;
}