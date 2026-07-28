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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};

        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        bool flag=0;

        while(!q.empty()){
            vector<int> col;
            int size=q.size();

            for(int i=0;i<size;i++){
                TreeNode* tnode=q.front();
                q.pop();
                if(tnode->left) q.push(tnode->left);
                if(tnode->right) q.push(tnode->right);
                col.push_back(tnode->val);
            }
            if(flag) reverse(col.begin(),col.end());
            flag^=1;
            res.push_back(col);
        }
        return res;
    }
};