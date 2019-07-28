/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode *runner = A, *prev;
    int count = 0;
    while(runner){
        count++;
        prev = runner;
        runner = runner->next;
    }
    if(count == 0 || count == 1 || B == 0 || count == B)
        return A;
    B %= count;
    B = count - B - 1;
    runner = A;
    while(B > 0){
        runner = runner ->next;
        B--;
    }
    ListNode *temp = runner->next;
    runner->next =  nullptr;
    prev->next = A;
    return temp;
}
