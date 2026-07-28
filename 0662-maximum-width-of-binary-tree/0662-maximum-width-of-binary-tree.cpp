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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>> q;
        q.push({root,0});

        int width=0;
        while(!q.empty()){
            long long size=q.size();
            long long start = q.front().second;
            long long end = q.back().second;
            width=max(width,(int)(end-start+1));
            cout<<width<<" ";
            for(int i=0;i<size;i++){
                auto it=q.front();
                q.pop();
                TreeNode* tnode=it.first;
                long long hlvl=it.second-start;

                if(tnode->left) q.push({tnode->left,hlvl*2+1});
                if(tnode->right) q.push({tnode->right,hlvl*2+2});
            }
        }
        return width;        
    }
};