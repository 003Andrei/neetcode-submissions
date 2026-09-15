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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res; 
        recPostOrder(root, res);
        return res;
    }
private: 
    void recPostOrder(TreeNode* root, vector<int>& result){
    TreeNode* curr = root; 
    if(!curr){
        return;

    }
        recPostOrder(curr->left, result);
        recPostOrder(curr->right, result);
    result.push_back(curr->val);

    }
};