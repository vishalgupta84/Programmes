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
node *duplicate(node *A){
    node *current=A;
    node *result=NULL;
    if(A==NULL)
        return A;
    int maximum=0;
    while(current){
        if(current->val>maximum)
            maximum=current->val;
        current=current->next;
    }
    int *arr=(int *)malloc(sizeof(int)*(maximum+1));
    int i;
    for(i=0;i<=maximum;i++)
        arr[i]=0;
    current=A;
    while(current){
        arr[current->val]++;
        current=current->next;
    }
    for(i=0;i<=maximum;i++){
        if(arr[i]==1){
        node *temp=(node *)malloc(sizeof(node));
        temp->val=i;
        temp->next=result;
        result=temp;
        }
    }
    return reverseList(result);
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
    node *result=duplicate(A);
    print(result);
    return 0;
}

