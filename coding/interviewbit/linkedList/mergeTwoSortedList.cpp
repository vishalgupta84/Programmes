/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *result = nullptr, *tip = nullptr;
    while(A&&B){
        ListNode * newNode;
        if(A->val < B-> val){
            newNode = new ListNode(A->val);
            A = A->next;
            
        } else{
            newNode = new ListNode(B->val);
            B = B->next;
        }
        if(!result){
            newNode->next = result;
            result = newNode;
            tip = result;
        }
        else{
            tip->next = newNode;
        }
    }
    while(A){
        ListNode *newNode = new ListNode(A->val);
        A = A->next;
        if(!result){
            newNode->next = result;
            result = newNode;
            tip = result;
        }
        else{
            tip->next = newNode;
        }
    }
    while(B){
        ListNode *newNode = new ListNode(B->val);
        B = B->next;
        if(!result){
            newNode->next = result;
            result = newNode;
            tip = result;
        }
        else{
            tip->next = newNode;
        }
    }
    return result;
}
