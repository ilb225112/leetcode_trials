/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p || root==q) return root;
        int count=0;
        count+= (root->val) < (p->val);
        count+= (root->val) < (q->val);

        if(count==0) return lowestCommonAncestor(root->left,p,q);
        if(count==1) return root;
        return lowestCommonAncestor(root->right,p,q);
    }
};