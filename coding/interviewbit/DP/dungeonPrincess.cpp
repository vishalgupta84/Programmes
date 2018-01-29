<<<<<<< HEAD
<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int health(std::vector<std::vector<int> > A ){
	int row=A.size();
    int col=A[0].size();
    if(row==0)
    return 0;
    vector<vector<int> > need(row+1,vector<int> (col+1,INT_MAX));
    need[row][col-1]=1;
    need[row-1][col]=1;
    for(int i=row-1;i>=0;i--){
        for(int j=col-1;j>=0;j--){
            int temp=min(need[i+1][j],need[i][j+1])-A[i][j];
            temp=temp<=0?1:temp;
            need[i][j]=temp;
        }
    }
    return need[0][0];
}
int main(){
	int n,m;
	cin >> n;
	cin >> m;	
	std::vector<std::vector<int> > A(n,std::vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < m; ++j)
		{
			/* code */
			cin >> A[i][j];
		}
	}
	cout << endl ;
	int sol=health(A);
	cout << sol << endl;
	return 0;
=======
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int health(std::vector<std::vector<int> > A ){
	int row=A.size();
    int col=A[0].size();
    if(row==0)
    return 0;
    vector<vector<int> > need(row+1,vector<int> (col+1,INT_MAX));
    need[row][col-1]=1;
    need[row-1][col]=1;
    for(int i=row-1;i>=0;i--){
        for(int j=col-1;j>=0;j--){
            int temp=min(need[i+1][j],need[i][j+1])-A[i][j];
            temp=temp<=0?1:temp;
            need[i][j]=temp;
        }
    }
    return need[0][0];
}
int main(){
	int n,m;
	cin >> n;
	cin >> m;	
	std::vector<std::vector<int> > A(n,std::vector<int>(m));
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < m; ++j)
		{
			/* code */
			cin >> A[i][j];
		}
	}
	cout << endl ;
	int sol=health(A);
	cout << sol << endl;
	return 0;
<<<<<<< HEAD
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
=======
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}