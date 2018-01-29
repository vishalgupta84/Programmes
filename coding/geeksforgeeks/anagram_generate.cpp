<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(std::vector<string> A){
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		cout << A[i] << " ";
	}
	cout <<endl;
}
std::vector<vector<int> > evalute(std::vector<string> A){
	std::map<string, int> m;
	std::map<string, int>::iterator it;
	std::vector<vector<int> > result;
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		string temp=A[i];
		sort(temp.begin(),temp.end());
		//cout << temp <<endl;
		it=m.find(temp);
		std::vector<int> v;
		int flag=0;
		if(it!=m.end()){
			//cout << temp << " "<<it->first <<endl;
			v.push_back(it->second+1);
			v.push_back(i+1);
			flag=1;
			result.push_back(v);
		}
		if(flag==0)
			m.insert(pair<string,int>(temp,i));
	}
	return result;
}
int main(){
	int n;
	cin >> n;
	std::vector<string> A;
	while(n--){
		string str;
		cin >>str;
		A.push_back(str);
	}	
	//print(A);
	std::vector<vector<int> > result=evalute(A);
	sort(result.begin(),result.end());
	for (int i = 0; i < result.size(); ++i)
	{
		/* code */
		cout << result[i][0]<<" "<<result[i][1]<<endl;
	}
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(std::vector<string> A){
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		cout << A[i] << " ";
	}
	cout <<endl;
}
std::vector<vector<int> > evalute(std::vector<string> A){
	std::map<string, int> m;
	std::map<string, int>::iterator it;
	std::vector<vector<int> > result;
	for (int i = 0; i < A.size(); ++i)
	{
		/* code */
		string temp=A[i];
		sort(temp.begin(),temp.end());
		//cout << temp <<endl;
		it=m.find(temp);
		std::vector<int> v;
		int flag=0;
		if(it!=m.end()){
			//cout << temp << " "<<it->first <<endl;
			v.push_back(it->second+1);
			v.push_back(i+1);
			flag=1;
			result.push_back(v);
		}
		if(flag==0)
			m.insert(pair<string,int>(temp,i));
	}
	return result;
}
int main(){
	int n;
	cin >> n;
	std::vector<string> A;
	while(n--){
		string str;
		cin >>str;
		A.push_back(str);
	}	
	//print(A);
	std::vector<vector<int> > result=evalute(A);
	sort(result.begin(),result.end());
	for (int i = 0; i < result.size(); ++i)
	{
		/* code */
		cout << result[i][0]<<" "<<result[i][1]<<endl;
	}
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}