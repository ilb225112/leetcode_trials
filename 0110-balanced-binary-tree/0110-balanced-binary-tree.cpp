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
    int heightdiff(TreeNode* root,int &diff){
        if(!root) return 0;
        int lh=heightdiff(root->left,diff);
        int rh=heightdiff(root->right,diff);
        diff=max(diff,abs(lh-rh));
        return max(lh,rh)+1;
    }

    bool isBalanced(TreeNode* root) {
        int diff=0;
        heightdiff(root,diff);
        return diff<=1;
    }
};