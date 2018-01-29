<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int number(int n){
	vector<int> A;
    A.push_back(1);
    int i;
    int val1,val2=A[0],last=A[A.size()-1];
    for(i=0;i<2*n;i++){
        for(int j=1;j<A.size();j++){
            val1=A[j];
            A[j]=(A[j]+val2)%mod;
            val2=val1;
        }
        A.push_back(last);
    }
    int num=(A[n]/(n+1));
    return num;
}
int main(){
	int n;
	cin >> n;
	int sol=number(n);
	cout << sol << endl;	
	return 0;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int number(int n){
	vector<int> A;
    A.push_back(1);
    int i;
    int val1,val2=A[0],last=A[A.size()-1];
    for(i=0;i<2*n;i++){
        for(int j=1;j<A.size();j++){
            val1=A[j];
            A[j]=(A[j]+val2)%mod;
            val2=val1;
        }
        A.push_back(last);
    }
    int num=(A[n]/(n+1));
    return num;
}
int main(){
	int n;
	cin >> n;
	int sol=number(n);
	cout << sol << endl;	
	return 0;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}