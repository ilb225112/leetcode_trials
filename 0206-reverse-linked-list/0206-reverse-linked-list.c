/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode lptr;
struct ListNode* reverseList(struct ListNode* head) {
    if(head==NULL || head->next==NULL) return head;

    lptr *prev=NULL,*curr=head,*nxt=head;
    while(curr && nxt){
        nxt=curr->next;
        curr->next=prev;
        
        prev=curr;
        curr=nxt;
    }
    return prev;
}