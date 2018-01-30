#include<iostream>
#include<vector>
using namespace std;
std::vector<std::vector<int> > generate(int num){
	std::vector<std::vector<int> > result;
	std::vector<int> v;
	v.push_back(1);
	result.push_back(v);
	for (int i = 2; i <= num; ++i){
		std::vector<int> inner;
		inner.push_back(1);
		for(int j=0;j<result[i-2].size()-1;j++){
			int num=result[i-2][j]+result[i-2][j+1];
			inner.push_back(num);
		}
		inner.push_back(1);
		result.push_back(inner);
	}
	return result;
}
int main(){
	int num;
	cin >> num;
	std::vector<std::vector<int> > result=generate(num);
	for (int i = 0; i < result.size(); ++i){
		/* code */
		for (int j = 0; j < result[i].size(); ++j){
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}