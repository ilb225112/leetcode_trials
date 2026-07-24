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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL || k==0) return head;
        int len=0,tk=k;
        ListNode* tvs=head, *kth=head;

        while(tk && tvs) tvs=tvs->next, tk--;
        if(tvs==NULL){
            len=k-tk;
            k%=len;
            return rotateRight(head,k);
        }

        while(tvs->next)  kth=kth->next, tvs=tvs->next;
        tvs->next=head;
        head=kth->next;
        kth->next=NULL;

        return head;
    }
};