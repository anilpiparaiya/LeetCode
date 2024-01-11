// New Solution

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
    void postOrder(TreeNode* root, vector<int>&ans){
        // Empty Tree
        if(root == NULL) return;

        // Calling function towards left
        postOrder(root->left, ans);

        // Calling function towards right
        postOrder(root->right, ans);

        // Store ans in the ans vector
        ans.push_back(root->val);

        return;
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postOrder(root, ans);
        return ans;
        
    }
};


// Old Solution



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
    void PostOrder(TreeNode* root, vector<int>&ans){
        // Empty Tree
        if(root == NULL) return;
        // Calling function towards left
        PostOrder(root->left, ans);
        // Calling function towards right
        PostOrder(root->right, ans);

        // Store ans in the ans vector

        ans.push_back(root->val);

        return;
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;

        PostOrder(root, ans);

        return ans;
        
    }
};
