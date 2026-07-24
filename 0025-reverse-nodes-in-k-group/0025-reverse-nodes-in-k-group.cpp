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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1) return head;
        
        ListNode *prev=NULL, *curr=head, *nxt,*st=NULL,*prevSt;
        while(1){
            int tk=k;
            ListNode *th=curr;
            while(tk && th){
                tk--;
                th=th->next;
            }
            if(tk) break;

            tk=k;
            prevSt=st;
            st=curr;
            while(tk){
                tk--;
                nxt=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nxt;
            }
            if(prevSt) prevSt->next=prev;
            else head=prev;
            st->next=curr;


        }
        return head;
    }
};