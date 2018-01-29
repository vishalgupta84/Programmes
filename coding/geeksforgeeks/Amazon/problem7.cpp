<<<<<<< HEAD
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findK(vector<std::vector<int> > A, int n, int m, int k)
{
//Your code here
    int l=0,top=0,right=m-1,down=n-1,left=0,dir=1,flag=0;
    while(flag==0){
        if(dir==1){
            for(int i=left;i<=right;i++){
                l++;
                if(l==k){
                    cout << A[top][i] << endl;
                    flag=1;
                    break;
                }
            }
            dir=2;
            top++;
        }
        if(dir==2){
            for(int i=top;i<=down;i++){
                l++;
                if(l==k){
                    cout << A[i][right] << endl;
                    flag=1;
                    break;
                }
            }
            dir=3;
            right--;
        }
        if(dir==3){
            for(int i=right;i>=left;i--){
                l++;
                if(l==k){
                    cout << A[down][i] << endl;
                    flag=1;
                    break;
                }
            }
            dir=4;
            down--;
        }
        if(dir==4){
            for(int i=down;i>=top;i--){
                l++;
                if(l==k){
                    cout << A[i][left] << endl;
                    flag=1;
                    break;
                }
            }
            left++;
            dir=1;
        }
    }
    return 0;
}
int main(){
    int col,row;
    cin >> row >> col;
    std::vector<std::vector<int> > A(row,std::vector<int>(col));
    for (int i = 0; i < row; ++i)
    {
        /* code */
        for(int j=0;j<col;j++)
            cin >> A[i][j];
    }
    //printMat(A,row,col);
    int k;
    cin >> k;
    int sol=findK(A,row,col,k);
    //cout << sol << endl;
=======
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findK(vector<std::vector<int> > A, int n, int m, int k)
{
//Your code here
    int l=0,top=0,right=m-1,down=n-1,left=0,dir=1,flag=0;
    while(flag==0){
        if(dir==1){
            for(int i=left;i<=right;i++){
                l++;
                if(l==k){
                    cout << A[top][i] << endl;
                    flag=1;
                    break;
                }
            }
            dir=2;
            top++;
        }
        if(dir==2){
            for(int i=top;i<=down;i++){
                l++;
                if(l==k){
                    cout << A[i][right] << endl;
                    flag=1;
                    break;
                }
            }
            dir=3;
            right--;
        }
        if(dir==3){
            for(int i=right;i>=left;i--){
                l++;
                if(l==k){
                    cout << A[down][i] << endl;
                    flag=1;
                    break;
                }
            }
            dir=4;
            down--;
        }
        if(dir==4){
            for(int i=down;i>=top;i--){
                l++;
                if(l==k){
                    cout << A[i][left] << endl;
                    flag=1;
                    break;
                }
            }
            left++;
            dir=1;
        }
    }
    return 0;
}
int main(){
    int col,row;
    cin >> row >> col;
    std::vector<std::vector<int> > A(row,std::vector<int>(col));
    for (int i = 0; i < row; ++i)
    {
        /* code */
        for(int j=0;j<col;j++)
            cin >> A[i][j];
    }
    //printMat(A,row,col);
    int k;
    cin >> k;
    int sol=findK(A,row,col,k);
    //cout << sol << endl;
>>>>>>> 5d151628b32a2ef5b633f055e6961a6c0d18654b
}