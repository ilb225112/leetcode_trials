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
        vector<int> inorder;
        stack<TreeNode*> st;
        TreeNode* tnode=root;

        while(1){
            if(tnode!=nullptr){
                st.push(tnode);
                tnode=tnode->left;
            }else{
                if(st.empty()) break;
                TreeNode* node=st.top();
                st.pop();

                inorder.push_back(node->val);
                tnode=node->right;
            }
        }
        return inorder;
    }
};