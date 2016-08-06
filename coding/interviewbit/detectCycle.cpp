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
node *detect(node *A){
   node *slow=A,*fast=A;
   while(slow&&fast&&fast->next){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast){
            slow=A;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
   }
   return NULL;
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

    //int n;
    //cin >> n;
    A->next->next->next->next = A;
    //print(A);
    node* result=detect(A);
    if(result)
        cout << result->val;
    else
        cout << "Not found";
    return 0;
}

