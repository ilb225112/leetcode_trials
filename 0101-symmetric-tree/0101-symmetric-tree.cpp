/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSym(TreeNode* p, TreeNode* q){
        if(p==nullptr) return q==nullptr;
        if(q==nullptr) return p==nullptr;

        if(p->val==q->val)
            return isSym(p->left,q->right) && isSym(p->right, q->left);

        return 0;
    }

    bool isSymmetric(TreeNode* root) {
        if(root->right && root->left)
            return isSym(root->left,root->right);
        else if(root->right || root->left)
            return false;
        return 1;
    }
};