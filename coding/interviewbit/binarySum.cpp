#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
string binarySum(string A,string B){
    //return "0";
    string out;
    int carry=0;
    unsigned int size_A=A.size();
    unsigned int size_B=B.size();
    int i=size_A-1;
    int j=size_B-1;
    int a=i,b=j;
    while(a>b){
        B.insert(0,1,'0');
        a--;
    }
    while(b>a){
        A.insert(0,1,'0');
        b--;
    }
    //cout << A << " " << B << endl;
    int s=A.size()-1;
    while(s>=0){
        int value1=(int)A[s]-48;
        int value2=(int)B[s]-48;
        int val=value1+value2+carry;
        int ans=val%2;
        carry=val/2;
        char ch=(char)(ans+48);
        out.insert(0,1,ch);
        s--;
    }
    if(carry){
        char ch=(char)(carry+48);
        out.insert(0,1,ch);
    }
    return out;
}
int main(){
    string A,B;
    cin >> A >> B;
    //cout << A << endl << B << endl;
    string sum=binarySum(A,B);
    cout <<"sum "<< sum << endl;
    return 0;
}
