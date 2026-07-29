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
    int ilen,plen;

    TreeNode* helper(vector<int> &pre, int &pidx, map<int,int> &m,int left, int right){
        if(left>=right || pidx==plen) return nullptr;
        
        TreeNode* root=new TreeNode(pre[pidx]);
        int temp=right;
        right=m[root->val];
        pidx++;

        root->left=helper(pre,pidx,m,left,right);
        root->right=helper(pre,pidx,m,right+1,temp);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> m; int idx=0;
        for(int i: inorder)
            m[i]=idx++;
        
        ilen=inorder.size();
        plen=preorder.size();
        int left=0,right=ilen,pidx=0;
        return helper(preorder,pidx,m,left,right);
    }
};