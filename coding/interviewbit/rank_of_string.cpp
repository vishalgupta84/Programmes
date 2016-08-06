#include<iostream>
#include<cstdlib>
#include<cstring>
#include<string>
using namespace std;
int factorial(int num){
    int i,product=1;
    for(i=2;i<=num;i++)
        product*=i;
    return product;
}
int find_rank(string str){
    int fact,i,j,sum=0;
    int len=str.length();
    for(i=0;i<len;i++){
        fact=factorial(len-i-1);
        int tmp=0;
        for(j=i+1;j<len;j++){
            if(str[j]<str[i])
                tmp++;
        }
        sum=sum+fact*tmp;
    }
    return sum;
}
int main(){
    std::string str;
    std::cin >> str;
    int val=find_rank(str);
    cout << val+1;
    return 0;
}
