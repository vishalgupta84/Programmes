#include<bits/stdc++.h>
using namespace std;
class k_th_pascal_row
{
public:
	//k_th_pascal_row(int A);
	vector<int> generate(int A);
};
std::vector<int> k_th_pascal_row::generate(int A){
	//A=A+1;
	std::vector<int> result;
	for (int i = 0; i <= A; ++i){
		std::vector<int> inner;
		if(result.size())
			inner.push_back(result[0]);
		for(int j=1;j<result.size();j++){
			inner.push_back(result[j]+result[j-1]);
		}
		inner.push_back(1);
		result=inner;
	}
	return result;
}
int main(){
	k_th_pascal_row pascal_row;
	int A;
	cin >> A;
	std::vector<int> result=pascal_row.generate(A);
	for (int i = 0; i < result.size(); ++i){
		/* code */
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}