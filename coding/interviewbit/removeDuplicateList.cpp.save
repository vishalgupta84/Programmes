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
node *removeDuplicate(node *A){
    node *current=A;
    if(A==NULL)
        return A;
    if(current->next==NULL)
        return A;
    while(current){
        node *next=current->next;
        node *prev=current;
        while(next){
        if(current->val==next->val){
                prev=next;
                next=next->next;
        }
        else
            break;
        }
        if(prev)
        current->next=prev->next;
        current=current->next;
        //print(A);
    }
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
    //int n;
    //cin >> n;
    node* result=removeDuplicate(A);
    print(result);
}
