#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int division(int dividend,int divisor){
    long long int c=0,sign1=0,sign2=0,d1=dividend,d2=divisor;
    if(dividend==0)
        return 0;
    if(dividend==-2147483648&&divisor==-1)
        return 2147483647;
    if(dividend==-2147483648&&divisor==1)
        return -2147483648;
    if(dividend==2147483648&&divisor==-1)
        return -2147483648;
    if(dividend<0){
        sign1=1;
        //d1=abs(dividend);
        if(d1==-2147483648)
            d1=2147483648;
        cout << "d1= " << d1 << " d2= "<<d2 <<endl;
    }
    if(divisor<0){
        sign2=1;
        d2=(long int)(divisor)*-1;
        cout << "d1= " << d1 << " d2= "<<d2 <<endl;
    }
    cout << "d1= " << d1 << " d2= "<<d2 <<endl;
    while(d1>=d2){
        //cout << "d1= " << d1 << " d2= "<<d2 <<endl;
        d1=d1-d2;
        c++;
    }
    if(sign1^sign2)
        return (c*-1);
    return c;
}
int main()
{
    int A,B;
    cin >> A >> B;
    //cout << "A= "<<A <<" B= "<<B<<endl;
    int result=division(A,B);
    cout << result;
    return 0;
}
