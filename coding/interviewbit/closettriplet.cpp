#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
return a<b;
}
int closet(vector<int> A,int B){
    sort(A.begin(),A.end(),compare);
    if(A.size()<3)
        return 0;
    int tempSum=abs(B-(A[0]+A[1]+A[2]));
    int result=A[0]+A[1]+A[2];
    for(unsigned int i=0;i<A.size();i++){
        int j=i+1,k=A.size()-1;
        while(j<k){
            int newSum=abs(B-(A[i]+A[j]+A[k]));
            if(newSum==0)
                return B;
            else if(B<(A[i]+A[j]+A[k])){
                if(newSum<tempSum){
                    tempSum=newSum;
                    result=A[i]+A[j]+A[k];
                }
                k--;
            }
            else{
               if(newSum<tempSum){
                    tempSum=newSum;
                    result=A[i]+A[j]+A[k];
                }
                j++;
            }
        }
    }
    return result;
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
    int k;
    cin >> k;
    int r=closet(A,k);
    //for(i=0;i<r.size();i++)
        //cout << r[i] << " ";
    cout << r;
    return 0;
}
