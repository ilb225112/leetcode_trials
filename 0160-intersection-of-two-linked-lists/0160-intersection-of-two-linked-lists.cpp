/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> mem;
        while(headA){
            mem.insert(headA);
            headA=headA->next;
        }
        auto end=mem.end();
        while(headB){
            if(mem.find(headB)!=end)
                return headB;
            headB=headB->next;
        }
        return NULL;
    }
};