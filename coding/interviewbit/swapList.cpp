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
node *swapList(node *A){
    node *current=A;
    if(A->next==NULL||A==NULL)
        return A;
    while(current){
        if(current->next){
            int v2=current->next->val;
            current->next->val=current->val;
            current->val=v2;
        }
        if(current->next)
            current=current->next->next;
        else
            current=NULL;
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
    //int B;
    //cin >> B;
    node* result=swapList(A);
    print(result);
    return 0;
}
