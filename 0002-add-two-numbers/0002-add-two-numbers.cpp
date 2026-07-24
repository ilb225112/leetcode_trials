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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,carry=0;
        ListNode* h1=l1, *h2=l2;

        
        carry+=l1->val+l2->val;
        sum=carry%10;
        carry/=10;
        ListNode* head=new ListNode(sum);
        ListNode* travel=head;
        l1=l1->next,l2=l2->next;

        while(l1 && l2){
            carry+=l1->val+l2->val;
            sum=carry%10;
            carry/=10;
            travel->next=new ListNode(sum);
            l1=l1->next,l2=l2->next,travel=travel->next;   
        }
        
        while(l1){
            carry+=l1->val;
            sum=carry%10;
            carry/=10;
            travel->next=new ListNode(sum);
            l1=l1->next,travel=travel->next;   
        }

        while(l2){
            carry+=l2->val;
            sum=carry%10;
            carry/=10;
            travel->next=new ListNode(sum);
            l2=l2->next,travel=travel->next;   
        }

        if(carry)
            travel->next=new ListNode(carry);

        return head;
    }
};