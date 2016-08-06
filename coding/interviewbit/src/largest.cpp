#include<iostream>
#include<cstdlib>
#include "largest.h"

using namespace std;
void largest::getarray(){
    cout << "length of array\n";
    cin >> length;
    int i;
    int *arr=(int *)malloc(length*sizeof(int));
    for(i=0;i<length;i++){
        cin >> arr[i];
    }
}
int largest::find_large(){
    int i,j;
    for(i=0;i<length;i++){
        for(j=i+1;j<length;j++){
            if(arr[j]>=arr[i]){
                int diff=j-i;
                if(diff>maximum){
                    maximum=diff;
                    //cout << maximum;
                }
            }
        }
    }
    //return maximum;
    //cout << maximum;
}
