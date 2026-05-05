/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(!head || head->next==NULL|| k==0) return head;

    int len=1;
    struct ListNode* temp=head;
    while(temp && temp->next != NULL){
        len++;
        temp=temp->next;
    }
    temp->next=head;

    temp=head;
    k=k%len;
    k=len-k-1;
    while(k){
        temp=temp->next;
        k--;
    }
    head=temp->next;
    temp->next=NULL;

    return head;
}