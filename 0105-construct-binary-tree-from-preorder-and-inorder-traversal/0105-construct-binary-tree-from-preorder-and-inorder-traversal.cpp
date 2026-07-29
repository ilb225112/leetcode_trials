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
    int ilen;

    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int &pidx,int &iidx,int stop){
        if(iidx>=ilen || inorder[iidx]==stop) return nullptr;
        TreeNode* root=new TreeNode(preorder[pidx++]);
        root->left=helper(preorder,inorder,pidx,iidx,root->val);
        iidx++;
        root->right=helper(preorder,inorder,pidx,iidx,stop);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pidx=0,iidx=0;
        ilen=inorder.size();
        return helper(preorder,inorder,pidx,iidx,INT_MAX);
    }
};