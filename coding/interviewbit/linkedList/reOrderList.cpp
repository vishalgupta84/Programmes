/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    ListNode *next = A, *reverseA = nullptr;
    int count = 0;
    while(next){
        ListNode *temp = new ListNode(next->val);
        next = next ->next;
        temp -> next = reverseA;
        reverseA = temp;
        count++;
    }
    ListNode *ans = nullptr;
    int cc = count/2;
    while(cc--){
        ListNode *node1 = new ListNode(A->val);
        node1->next = ans;
        ans = node1;
        ListNode *node2 = new ListNode(reverseA->val);
        node2->next = ans;
        ans = node2;
        A = A->next;
        reverseA = reverseA->next;
    }
    
    if(count%2){
        ListNode *node1 = new ListNode(A->val);
        node1->next = ans;
        ans = node1;
    }
    next = ans;
    ListNode *prev = nullptr;
    while(next){
        ListNode *temp = next->next;
        next->next = prev;
        prev = next;
        next = temp;
    }
    return prev;
}
