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

    void PreOrder(TreeNode* root, vector<int>&ans){
        // Base case
        if(root == NULL) return;

        // Store ans 
        ans.push_back(root->val);

        // Traverse Left
        PreOrder(root->left, ans);

        // Traverse Right
        PreOrder(root->right, ans);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        PreOrder(root, ans);
        return ans;
        
        
    }
};
