#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
    return a<b;
}
vector<vector<int> > sumZero(vector<int> A){
    sort(A.begin(),A.end(),compare);
    vector<vector<int> > output;
    int i,j,k,l;
    //for(i=0;i<A.size();i++)
        //cout << A[i] <<" ";
    for(i=0;i<A.size();i++){
        j=i+1;
        k=A.size()-1;
        while(j<k){
        vector<int> r;
        //cout  << "A[i] " <<A[i] << " A[j] "<<A[j] << " A[k] " <<A[k]<<endl;
        if(A[i]+A[j]+A[k]==0){
            r.push_back(A[i]);
            r.push_back(A[j]);
            r.push_back(A[k]);
            int z=0;
            //cout  << "A[i] " <<A[i] << " A[j] "<<A[j] << " A[k" <<A[k]<<endl;
            for(l=0;l<output.size();l++){
                 if(output[l]!=r)
                    z++;
            }
            if(z==output.size())
                output.push_back(r);
            j++;
            k--;
            //cout << i << " " << j <<" " << k <<endl;
        }
        else if(A[i]+A[j]+A[k]>0)
            k--;
        else
            j++;
        }
    }
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
    vector<vector<int> > r=sumZero(A);
    for(i=0;i<r.size();i++){
        cout << r[i][0] << " "<< r[i][1]<< " "<<r[i][2] <<endl;
    }
    //cout << "ans = " << r <<endl;
}