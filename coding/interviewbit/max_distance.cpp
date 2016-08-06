#include<iostream>
#include<cstdlib>
#include "largest.h"
using namespace std;
int main(){
    largest number;
    number.getarray();
    number.find_large();
    cout << number.maximum;
    return 0;
}
