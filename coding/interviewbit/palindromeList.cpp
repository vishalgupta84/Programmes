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
node* Reverse(node *A){
    node *current=A;
    node *prev=NULL;
    node *next;
    while(current){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
int palidrome(node *A){
    //node *rev=Reverse(A);
    node *current=A,*rev=NULL;
    while(current){
        int num=current->val;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=num;
        temp->next=rev;
        rev=temp;
        //print(A);
        current=current->next;
    }
    while(A&&rev){
        if(A->val!=rev->val)
            return 0;
        //cout << A->val << " " << rev->val <<endl;
        A=A->next;
        rev=rev->next;
    }
    return 1;
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
    //print(A);
    int result=palidrome(A);
    cout << result;
}
