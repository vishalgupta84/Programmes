#include<iostream>
#include<bits/stdc++.h>
using namespace std;
std::vector<int> flip(string A){
	vector<int> temp;
    vector<int> result;
    for(int i=0;i<A.size();i++){
        if(A[i]=='0')
        temp.push_back(1);
        else temp.push_back(-1);
    }
    int sum_till=0,max_sum=0,start=-1,end=-1,l=0;
    for(int i=0;i<A.size();i++){
        if(sum_till+temp[i]<0){
            sum_till=0;
            l=i+1;
            //cout << l << endl;
        }
        else sum_till+=temp[i];
        if(sum_till>max_sum){
            max_sum=sum_till;
            start=l;
            end=i;
        }
    }
    if(start==-1||end==-1)
    return result;
    result.push_back(start+1);
    result.push_back(end+1);
    return result;
}
int main(){
	int n;
	cin >> n;	
	return 0;
	string A;
	cin >> A;
	std::vector<int> v=flip(A);
	cout << v[0] << " " << v[1] << endl;
	return 0;
}