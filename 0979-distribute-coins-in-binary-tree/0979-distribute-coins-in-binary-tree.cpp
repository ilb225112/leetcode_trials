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
    int dcoins(TreeNode* root, int & minMoves){
        if(!root) return 0;
        int leftBalance=dcoins(root->left,minMoves);
        int rightBalance=dcoins(root->right,minMoves);
        minMoves+=abs(leftBalance)+abs(rightBalance);
        return root->val+leftBalance+rightBalance-1;
    }

    int distributeCoins(TreeNode* root) {
        int minMoves=0;
        dcoins(root,minMoves);
        return minMoves;
    }
};