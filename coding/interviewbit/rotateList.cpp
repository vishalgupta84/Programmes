#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
struct Node{
    int val;
    struct Node *next;
};
typedef struct Node node;
void print(node *A){
    while(A){
        cout << A->val <<"->";
        A=A->next;
    }
    cout << endl;
}
node *rotateList(node *A,int B){
    node *current=A;
    int n=0,m=0;
    if(B==0)
        return A;
    while(current){
        n++;
        current=current->next;
    }
    if(n==1||n==0)
        return A;

    current=A;
    node *temp=A;
    node *tmp;
    B=B%n;
    if(B==0)
    return A;
    while(m<(n-B-1)){
        current=current->next;
        m++;
    }
    tmp=current->next;
    current->next=NULL;
    A=tmp;
    while(tmp->next)
        tmp=tmp->next;
    tmp->next=temp;
    return A;
}
int main(){
    node *A=NULL;
    while(1){
        int num;
        cin >> num;
        if(num==-1)
            break;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=num;
        temp->next=A;
        A=temp;
    }
    print(A);
    int B;
    cin >> B;
    node* result=rotateList(A,B);
    print(result);
    return 0;
}


