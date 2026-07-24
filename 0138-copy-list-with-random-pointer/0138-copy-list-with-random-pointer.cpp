/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* tvs=head;
        while(tvs){
            Node* newNode=new Node(tvs->val);
            newNode->next=tvs->next;
            tvs->next=newNode;
            tvs=tvs->next->next;
        }
        tvs=head;
        while(tvs){
            Node* res=tvs->next;
            res->random=(tvs->random==NULL)?NULL:tvs->random->next;
            tvs=tvs->next->next;
        }

        Node* dummy=new Node(0),*temp=dummy;
        tvs=head;
        while(tvs){
            temp->next=tvs->next;
            temp=temp->next;
            tvs->next=tvs->next->next;
            tvs=tvs->next;
        }

        return dummy->next;
    }
};