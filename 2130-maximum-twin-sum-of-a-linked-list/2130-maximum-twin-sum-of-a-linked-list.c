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
    NODE* prev=NULL,*nxt=NULL;
    while(slow){
        nxt=slow->next;
        slow->next=prev;
        prev=slow;
        slow=nxt;
    }

       

    int res=0,sum=0;
    slow=head;
    while(prev){
        sum=slow->val+prev->val;
        res=(sum>res)?sum:res;
        slow=slow->next;
        prev=prev->next;
    }
    return res;
}