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
    void deleteNode(ListNode* temp) {
        ListNode* nodeToDelete=temp->next;
        temp->val=temp->next->val;
        temp->next=temp->next->next;
        delete nodeToDelete;
    }
};