/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void f(Node* root, vector<int> &op) {
        if(root==NULL) return;
        op.push_back(root->val);
        for(Node* curr: root->children) {
            f(curr, op);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> op;
        if(!root) return op;
        else {
            f(root, op);
            return op;
        }
    }
};