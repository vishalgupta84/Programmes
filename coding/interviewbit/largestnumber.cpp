#include<iostream>
#include<cstdlib>

using namespace std;
class make
{
    public:
        int getarray();
        int makenumber();
        int compare(int first,int second);
        long long unsigned int display();
        int power(int number);
        int dig(int idx);
    private:
        int *number;
        int n;
};
int make::dig(int idx){
    int c=0,i;
      for(i=idx+1;i<n;i++){
        int tmp=number[i];
        while(tmp){
            c++;
            tmp/=10;
        }
    }
    return c;
}
int make::getarray(){
        int i;
        cout << "enter size"<<endl;
        cin >> make::n;
        make::number=(int *)malloc(sizeof(int)*n);
        cout << "enter array\n";
        for(i=0;i<n;i++){
            cin >> make::number[i];
        }
}
int make::power(int number){
    int pow=1,i;
    for(i=0;i<number;i++)
        pow=pow*10;
    return pow;
}
int make::compare(int first,int second){
    int count1,count2,tmp1,tmp2;
    tmp1=first;
    tmp2=second;
    count1=0;
    count2=0;
    while(tmp1!=0){
        count1++;
        tmp1=tmp1/10;
    }
    while(tmp2!=0){
        count2++;
        tmp2=tmp2/10;
    }
    tmp1=first;
    tmp2=second;
    first=tmp1*power(count2)+tmp2;
    second=tmp2*power(count1)+tmp1;
    if(first>=second)
        return true;
    return false;
}
int make::makenumber(){
    int i,j;
    for(i=0;i<n;i++){
        int flag=0;
        for(j=0;j<n-1;j++){
            if(compare(number[j+1],number[j]))
                {
                    int temp=number[j];
                    number[j]=number[j+1];
                    number[j+1]=temp;
                    flag=1;
                }
        }
        if(!flag)
            break;
    }

}
long long unsigned int make::display(){
    int i,digit=0;
    long long unsigned int sum=0;
    for(i=0;i<n;i++){
        int c=dig(i);
        sum=sum+number[i]*power(c);
    }
    return sum;
    cout << endl;

}
int main()
{
    make largest;
    largest.getarray();
    //cout << "original number\n";
    largest.display();
    largest.makenumber();
    cout << "largest number possible\n";
    long long unsigned int number=largest.display();
    cout << number << endl;
    return 0;
}
