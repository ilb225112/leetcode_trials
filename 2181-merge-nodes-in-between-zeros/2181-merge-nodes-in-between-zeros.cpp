/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* p=head, *q=head->next;
        int sum=0;
        while(q){
            sum=0;
            while(q->val!=0){
                sum+=q->val;
                q=q->next;
            }
            p->val=sum;
            p->next=q;
            q=q->next;
            if(q) p=p->next;
        }
        p->next=nullptr;
        return head;
    }
};