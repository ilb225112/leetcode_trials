/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int pairSum(struct ListNode* head) {
    typedef struct ListNode NODE;
    NODE* slow=head, *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    NODE* prev=NULL,*curr=slow,*nxt=slow;
    while(nxt){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    
       

    int res=0;
    slow=head;
    while(prev){
        res=fmax(res,slow->val+prev->val);
        slow=slow->next;
        prev=prev->next;
    }
    return res;
}