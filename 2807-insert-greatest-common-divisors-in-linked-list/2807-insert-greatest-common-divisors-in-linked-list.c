/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd(int m,int n){
    if(n==0) return m;
    return gcd(n,m%n);
}



struct ListNode* insertGreatestCommonDivisors(struct ListNode* head) {
    if(head==NULL|| head->next==NULL)
        return head;

    struct ListNode* curr = head;
    while(curr!=NULL && curr->next!=NULL){
        int v=gcd(curr->val,curr->next->val);

        struct ListNode* newNode = malloc(sizeof(struct ListNode));
        newNode->val=v;

        newNode->next=curr->next;
        curr->next=newNode;

        curr=newNode->next;
    }
    return head;
}