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
    TreeNode* helper(unordered_map<int,int> &m, vector<int>& postorder, int& pidx, int l, int r){
        if(r<l || pidx<0) return nullptr;

        TreeNode* root= new TreeNode(postorder[pidx--]);
        int temp=m[root->val];

        root->right=helper(m,postorder,pidx,temp+1,r);
        root->left=helper(m,postorder,pidx,l,temp-1);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> m;
        int idx=0;
        for(int i:inorder)
            m[i]=idx++;
        int pidx=idx-1,l=0,r=pidx;

        return helper(m,postorder,pidx,l,r);
    }
};