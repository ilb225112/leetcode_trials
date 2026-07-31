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
    TreeNode* searchBST(TreeNode* srhRoot, int val) {
        TreeNode* root=srhRoot;
        while(root){
            int num=root->val;
            //cout<<num<<","<<val<<" ";
            if(num==val) return root;
            if(num>val) root=root->left;
            else root=root->right;
        }
        return nullptr;
    }
};