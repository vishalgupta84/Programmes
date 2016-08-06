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
