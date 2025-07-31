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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        if(!root) return res;
        double ans=0.0;
        double c=0.0;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()) {
            TreeNode* temp = q.front();
            q.pop();
            
            if(temp==NULL) {
                res.push_back(ans/c);
                ans=0;
                c=0;
                if(!q.empty()) {
                    q.push(NULL);
                }
            }
            else {
                ans+=temp->val;
                c++;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return res;
    }
};