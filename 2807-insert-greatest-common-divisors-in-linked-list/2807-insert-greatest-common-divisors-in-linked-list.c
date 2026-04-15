/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int gcd(int m,int n){
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
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