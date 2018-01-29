#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
    int n,i,j;
    string *str=NULL,temp;
    cout << "enter number of strings\n";
    cin >> n;
    str=new string[n];
    cout << "now enter strings\n";
    for(i=0;i<n;i++){
        cin >> temp;
        str[i]=temp;
    }
    for(i=0;i<n-1;i++){
        int idx=i;
        for(j=i+1;j<n;j++){
            if(str[j].length()<str[idx].length())
                idx=j;
        }
        temp=str[idx];
        str[idx]=str[i];
        str[i]=temp;
    }
    cout << "sorted string with respect to length of each string is \n";
    for(i=0;i<n;i++)
        cout << str[i] << endl;
    return 0;
}
