#include<iostream>
#include<cstdlib>
using namespace std;
class palindrome
{
	int l,r;
	long long unsigned int sum;
public:
	void getRange();
	bool determine(int num);
	void print();
};
void palindrome::getRange(){
	int i;
	cin >> l;
	cin >> r;
	for(i=l;i<=r;i++){
		if(determine(i)){
			sum=sum+i;
		}
	}
} 
bool palindrome::determine(int num){
	int temp=0,tmp;
	tmp=num;
	while(tmp){
		int digit=tmp%10;
		tmp=tmp/10;
		temp=temp*10+digit;
	}
	if(temp==num)
		return true;
	return false;
}
void palindrome::print(){
	cout << sum << endl;
	sum=0;
}
/*int determine(int num){
	int temp=0,tmp;
	tmp=num;
	while(tmp){
		int digit=tmp%10;
		tmp=tmp/10;
		temp=temp*10+digit;
	}
	if(temp==num)
		return 1;
	return 0;
}*/
int main(){
	int n,i,l,r,j;
	cin >> n;
	for(i=0;i<n;i++){
		palindrome obj;
		obj.getRange();
		obj.print();
		/*cin >> l;
		cin >> r;
		long long unsigned int sum=0;
		for(j=l;j<=r;j++){
			if(determine(j))
				sum=sum+j;
		}
		cout << sum << endl;*/
	}
	return 0;
}