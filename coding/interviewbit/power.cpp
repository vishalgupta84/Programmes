#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    long long int ans=1;
    cin >> a;
    cin >> b;
    cin >> c;
    while(b>0){
        if(b%2)
            ans=(ans*a)%c;
        a=(a*a)%c;
        b=b/2;
    }
    if(ans<0)
        ans=ans+c;
    cout << ans;
    return 0;
}
