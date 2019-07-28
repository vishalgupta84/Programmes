/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *head = A;
    ListNode *runner;
    while(head){
        runner = head;
        if(runner->next && (runner->val == runner->next->val)){
            ListNode * temp = runner->next;
            runner->next = runner->next->next;
            temp->next = nullptr;
        } 
        else {
            head = head->next;
        }
    }
    return A;
}
