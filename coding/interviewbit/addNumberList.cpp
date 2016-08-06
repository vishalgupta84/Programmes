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
node *reverseList(node *A){
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
node *swapList(node *A,node *B){
    if(A==NULL)
        return reverseList(B);
    if(B==NULL)
        return reverseList(A);
    int carry=0;
    node *result=NULL;
    while(A&&B){
        int value1=A->val;
        int value2=B->val;
        int value=(value1+value2+carry)%10;
        carry=(value1+value2+carry)/10;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=value;
        //temp->next=A;
        temp->next=NULL;
        if(result==NULL){
            result=temp;
        }
        else{
            node *tmp=result;
            while(tmp->next)
                tmp=tmp->next;
            tmp->next=temp;
        }
        A=A->next;
        B=B->next;
    }
    while(A){
        int value1=A->val;
        int value=(value1+carry)%10;
        carry=(value1+carry)/10;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=value;
        //temp->next=A;
        temp->next=NULL;
        if(result==NULL){
            result=temp;
        }
        else{
            node *tmp=result;
            while(tmp->next)
                tmp=tmp->next;
            tmp->next=temp;
        }
        A=A->next;
    }
    while(B){
        int value1=B->val;
        int value=(value1+carry)%10;
        carry=(value1+carry)/10;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=value;
        temp->next=NULL;
        if(result==NULL){
            result=temp;
        }
        else{
            node *tmp=result;
            while(tmp->next)
                tmp=tmp->next;
            tmp->next=temp;
        }
        B=B->next;
    }
    while(carry){
        int value=carry%10;
        carry=carry/10;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=value;
        temp->next=NULL;
        if(result==NULL){
            result=temp;
        }
        else{
            node *tmp=result;
            while(tmp->next)
                tmp=tmp->next;
            tmp->next=temp;
        }
    }
    //node *result=makeList(value);
    return result;
}
int main(){
    node *A=NULL,*B=NULL;
    int n,m;
    cin >> n >> m;
    while(n--){
        int num;
        cin >> num;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=num;
        temp->next=A;
        A=temp;
    }
    while(m--){
        int num;
        cin >> num;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=num;
        temp->next=B;
        B=temp;
    }
    print(A);
    print(B);
    //int B;
    //cin >> B;
    node* result=swapList(A,B);
    print(result);
    return 0;
}

