#include<iostream>
#include<cstdlib>
#ifndef LARGESTNUM_H
#define LARGESTNUM_H
using namespace std;

class largestnum
{
    public:
        void getarray();
        int find_large();
    private:
        int length;
        int *arr;
};

#endif // LARGESTNUM_H
