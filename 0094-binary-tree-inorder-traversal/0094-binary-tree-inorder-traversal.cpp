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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        while(root!=NULL){
            if(root->left==NULL){
                res.push_back(root->val);
                root=root->right;
            }else{
                TreeNode* ip=root->left;
                while(ip->right && ip->right!=root){
                    ip=ip->right;
                }
                
                if(ip->right==NULL){
                    ip->right=root;
                    root=root->left;
                }else{
                    ip->right=NULL;
                    res.push_back(root->val);
                    root=root->right;
                }
            }
        }
        return res;
    }
};