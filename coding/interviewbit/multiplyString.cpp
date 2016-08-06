#include<iostream>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
string multiply(string A,string B){
    unsigned int size_B=B.size();
    unsigned int size_A=A.size();
    string output;
    if(size_B==0||A.size()==0)
        return output;
    if(size_B==1&&B[0]=='0')
        return "0";
    if(size_A==1&&A[0]=='0')
        return "0";
    int i,j;
    for(i=size_B-1;i>=0;i--){
        int factor=(int)(B[i])-48;
        int carry=0;
        string tmp;
        for(j=size_A-1;j>=0;j--){
            int one=(int)A[j]-48;
            int ans=((factor*one)+carry)%10;
            carry=((factor*one)+carry)/10;
            char ch=(char)(ans+48);
            tmp.insert(0,1,ch);
        }
        if(carry){
                char ch=(char)(carry+48);
                tmp.insert(0,1,ch);
        }
        if(output.size()==0)
            output=tmp;
        else{
            int k=size_B-1;
            while(k>i){
                tmp.push_back('0');
                k--;
            }
            if(tmp.size()!=output.size())
                output.insert(0,1,'0');
            carry=0;
            for(j=output.size()-1;j>=0;j--){
                int value=((int)(output[j])-48)+((int)(tmp[j])-48)+carry;
                int ans=value%10;
                carry=value/10;
                output[j]=(char)(ans+48);
            }
            if(carry){
                    char ch=(char)(carry+48);
                output.insert(0,1,ch);
            }
        }
    }
    i=0;
    while(i<output.size()&&output[i]=='0'){
        output.erase(output.begin());
        i++;
    }
    if(output.size()==0)
        return "0";
    return output;
}
int main(){
    string A,B;
    cin >> A;
    cin >> B;
    string ans=multiply(A,B);
    cout << ans;
}
