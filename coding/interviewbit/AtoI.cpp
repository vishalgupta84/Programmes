#include<iostream>
#include<cstring>
#include<cstdlib>
#include<vector>
using namespace std;
int convert(string A){
    vector<char> str;
    unsigned int i;
    for(i=0;i<A.size();i++){
        str.push_back(A[i]);
    }
    while(str[0]==' '){
        str.erase(str.begin());
    }
    int tmp=0;
    if(str[0]=='-'){
        tmp=1;
        str.erase(str.begin());
    }
    int flag=(int)(str[0]);
    if(flag>=58||flag<=47)
        return 0;
    int number=0;
    i=0;
    flag=flag-48;
    while(flag>=0&&flag<=9){
        if(i>=str.size())
            break;
        int f1=10,f2=10;
        if(tmp)
            number=number*(-1);
        if(number>0){
            f1=INT_MAX/number;
            if(f1<10)
                return INT_MAX;
        }
        if(number<0&&number!=-1){
            f2=INT_MIN/number;
            if(f2<10)
                return INT_MIN;
        }
        if(tmp)
            number=number*(-1);
        number=number*10+flag;
        i++;
        flag=(int)(str[i]);
        flag=flag-48;
    }
    if(tmp)
        number=number*(-1);
    return number;
}
int main()
{
    string A;
    getline(cin,A);
    int result=convert(A);
    cout << result;
    return 0;
}
