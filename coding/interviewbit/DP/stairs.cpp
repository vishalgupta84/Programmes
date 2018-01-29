<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stair(int n){
	vector<int> table(n+1);
   if(n==0)
   return 0;
   if(n==1)
   return 1;
   table[0]=1;
   table[1]=1;
   for(int i=2;i<=n;i++)
   table[i]=table[i-1]+table[i-2];
   return table[n];
}
int main(){
	int n;
	cin >> n;
	int sol=stair(n);
	cout << sol <<endl;
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int stair(int n){
	vector<int> table(n+1);
   if(n==0)
   return 0;
   if(n==1)
   return 1;
   table[0]=1;
   table[1]=1;
   for(int i=2;i<=n;i++)
   table[i]=table[i-1]+table[i-2];
   return table[n];
}
int main(){
	int n;
	cin >> n;
	int sol=stair(n);
	cout << sol <<endl;
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}