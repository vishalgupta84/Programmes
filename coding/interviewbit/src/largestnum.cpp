#include<iostream>
#include<cstdlib>
#include "largestnum.h"

void largestnum::getarray()
{
    //ctor
    int i;
    cout << "enter length of array\n";
    cin >> length;
    int *arr=(int *)malloc(length*sizeof(int));
    for(i=0;i<length;i++){
        cin >> arr[i];
    }
}
