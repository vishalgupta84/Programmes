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
node *insertionSort(node *A){
    node *current=A;
    node *result=NULL;
    if(A==NULL)
        return A;
    if(A->next==NULL)
        return A;
    while(current){
          node *temp=result,*prev=NULL;
          node *flag=current;
          int value=current->val;
          current=current->next;
          while(temp&&temp->val<value){
                prev=temp;
                temp=temp->next;
          }
          if(prev==NULL){
            flag->next=result;
            result=flag;
          }
          else{
            flag->next=prev->next;
            prev->next=flag;
          }
    }
    return result;
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
    node *result=insertionSort(A);
    print(result);
    return 0;
}
