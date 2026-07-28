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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        int x=0,y=0;
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> m;

        q.push({root,{0,0}});
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                auto it = q.front();
                q.pop();
                x=it.second.first;
                y=it.second.second;
                TreeNode* tnode=it.first;
                m[y][x].insert(tnode->val);

                if(tnode->left) q.push({tnode->left,{x+1,y-1}});
                if(tnode->right) q.push({tnode->right,{x+1,y+1}});
            }
        }

        for(const auto &ix: m){
            vector<int> col;
            for(const auto &iy:ix.second){
                col.insert(col.end(),iy.second.begin(),iy.second.end());
            }
            res.push_back(col);
        }

        return res;
    }
};