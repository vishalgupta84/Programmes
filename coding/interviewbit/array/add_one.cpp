#include<iostream>
#include<vector>
using namespace std;
std::vector<int> add1(std::vector<int> &A){
	if(A.size()==0)
		return A;
	A[A.size()-1]=A[A.size()-1]+1;
	int carry=A[A.size()-1]/10;
	A[A.size()-1]=A[A.size()-1]%10;
	for(int i=A.size()-2;i>=0;i--){
		A[i]=A[i]+carry;
		carry=A[i]/10;
		A[i]=A[i]%10;
	}

	while(carry==0&&A[0]==0)
		A.erase(A.begin(),A.begin()+1);
	if(carry){
		A.insert(A.begin(),carry);
	}
	return A;
}
int main(){
	std::vector<int> A;
	int n;
	cin >> n;
	int num;
	for (int i = 0; i < n; ++i){
		cin >> num;
		A.push_back(num);
	}
	vector<int> res=add1(A);
	for (int i = 0; i < res.size(); ++i){
		cout << res[i] << " ";
	}
	cout << endl;
	return 0;
}