/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    if(head==NULL || head->next==NULL) return NULL;

    struct ListNode* fast=head->next->next, *slow=head,*temp;
    while(fast && fast->next)
        fast=fast->next->next,slow=slow->next;
    temp=slow->next;
    slow->next=temp->next;

    temp->next=NULL;
    free(temp);

    return head;
}