//1,2,5,10,20,50,100,200
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){	
	std::vector<int> coin(8);
	coin[0]=1;
	coin[1]=2;
	coin[2]=5;
	coin[3]=10;
	coin[4]=20;
	coin[5]=50;
	coin[6]=100;
	coin[7]=200;
	std::vector<int> table(201,0);
	table[0]=1;
	for(int i=0;i<8;i++){
		for(int j=coin[i];j<=200;j++)
			table[j]=table[j]+table[j-coin[i]];
	}
	cout << table[200] << endl;
	return 0;
}