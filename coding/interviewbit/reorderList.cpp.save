#include<iostream>
#include<cstdlib>
#include<stack>
#include<vector>
#include<cstring>
#include<string>
using namespace std;
struct Node{
    int val;
    struct Node *next;
};
typedef struct Node node;
void print(node *A){
    while(A){
        cout << A->val << " ";
        A=A->next;
    }
    cout << endl;
}
node *reverseList(node *A){
    node *prev=NULL,*next,*current=A;
    while(current){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
node *reorder(node *A){
    node *current=A;
    int c=0;
    if(!A)
        return A;
    while(current){
        current=current->next;
        c++;
    }
    if(c%2==0)
        c=c/2-1;
    else
        c=c/2;
    current=A;
    while(c--)
        current=current->next;
    node *rev=current->next;
    current->next=NULL;
    rev=reverseList(rev);
    //print(rev);
    node *first=A,*second=rev;
    //print(first);
    //print(second);
    while(first&&second){
        node *next=second->next;
        second->next=first->next;
        first->next=second;
        second=next;
        first=first->next->next;
    }
    return A;
}
int main(){
    node *A=NULL;
    int n;
    cin >> n;
    while(n--){
        int num;
        cin >> num;
        node *temp=(node *)malloc(sizeof(node));
        temp->val=num;
        temp->next=A;
        A=temp;
    }
    print(A);
    node *result=reorder(A);
    print(result);
    return 0;
}


