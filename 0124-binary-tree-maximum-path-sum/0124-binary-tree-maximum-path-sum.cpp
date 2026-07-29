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
    int pathSum(TreeNode* root,int &mps){
        if(!root) return 0;
        int left=max(0,pathSum(root->left,mps));
        int right=max(0,pathSum(root->right,mps));
        mps=max(mps,root->val+left+right);
        return max(left,right)+root->val;
    }

    int maxPathSum(TreeNode* root) {
        int mps=INT_MIN;
        pathSum(root,mps);
        return mps;
    }
};