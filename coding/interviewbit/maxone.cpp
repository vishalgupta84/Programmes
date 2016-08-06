#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
vector<int> maxOne(vector<int> A,int B){
    int i,j,n=A.size();
    if(A.size()==0)
        return A;
    vector<int> output;
    if(A.size()<B){
        for(i=0;i<A.size();i++)
            output.push_back(i);
        return output;
    }
    i=0;
    int start,maximum=0;
    while(i<n){
        int tmp=B,len=0,j=i;
        while(j<n){
            if(A[j]==0){
                tmp--;
                if(tmp<0)
                    break;
            }
            j++;
            len++;
        }

        if(len>maximum){
            start=i;
            maximum=len;
            //cout << "start= "<< start<< "maximum= " << maximum << "len= "<<len<<endl;
        }
        i++;
    }
    while(maximum--)
        output.push_back(start++);
    return output;
}
int main(){
    int n,i;
    cin >> n;
    vector<int> A;
    for(i=0;i<n;i++){
        int num;
        cin >> num;
        A.push_back(num);
    }
    int B;
    cin >> B;
    vector<int> output;
    output=maxOne(A,B);
    for(i=0;i<output.size();i++)
        cout << output[i]<<" ";
    return 0;
}
