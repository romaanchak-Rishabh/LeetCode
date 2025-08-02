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
    int getHeight(TreeNode* root) {
        if(root==NULL) return 0;

        int left = getHeight(root->left);
        int right = getHeight(root->right);
        return max(left, right) +1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;

        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);
        int combined = getHeight(root->left) + getHeight(root->right);

        return max(max(leftDiameter, rightDiameter), combined);
    }
};