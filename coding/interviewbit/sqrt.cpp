#include<iostream>
using namespace std;
int sq(int A){
if(A==0)
    return 0;
    int first=1,last=A;
    long long unsigned int n=(first+last)/2;
    while(1){
        n=(first+last)/2;
        if(n*n<=A&&(n+1)*(n+1)>A)
            break;
        if((n+1)*(n+1)<=A)
            first=n+1;
        if((n*n)>A)
            last=n-1;
    }
    return n;
}
int main()
{
    int a;
    cin >> a;
    int r=sq(2147483647);
    cout << r;
}
