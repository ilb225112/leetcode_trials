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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *track=head;
        for(int i=0;i<n;i++)    track=track->next;
        if(!track)   return head->next;

        ListNode* ptr=head;
        while(track->next)    track=track->next, ptr=ptr->next;
        ptr->next=ptr->next->next;

        return head;
    }
};