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
node *removeNode(node *A,int n){
    node *current=A;
    if(n<1){
        while(current->next->next)
            current=current->next;
        current->next=NULL;
        return A;
    }
    int c=0,m=0;
    while(current){
        current=current->next;
        c++;
    }
    if(c==1){
        return NULL;
    }
    if(n>=c){
        A=A->next;
        return A;
    }
    current=A;
    while(m<(c-n-1)){
        current=current->next;
        m++;
    }
    current->next=current->next->next;
    //print(A);
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
        //print(A);
    }
    print(A);
    int n;
    cin >> n;
    node* result=removeNode(A,n);
    print(result);
}
