#ifndef LARGEST_H
#define LARGEST_H
#include<iostream>
#include<cstdlib>

using namespace std;

class largest
{
    public:
        void getarray();
        int find_large();
        int maximum=-1;
    private:
        int length;
        int *arr;
};

#endif // LARGEST_H
