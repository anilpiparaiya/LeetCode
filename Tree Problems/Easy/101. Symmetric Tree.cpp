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
class Solution{
public:
    bool isMirror(TreeNode *left, TreeNode *right){
        if (!left && !right) return true;
        if (!left || !right) return false;
        return (left->val == right->val) && isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        return isMirror(root->left, root->right);
    }
};


// Solution 2

class Solution {
public:
    bool isSymmetricHelper(TreeNode* leftNode, TreeNode* rightNode){
        if(leftNode==NULL && rightNode==NULL) return true;
        if(leftNode==NULL || rightNode==NULL || leftNode->val != rightNode->val) return false;
        
        return isSymmetricHelper(leftNode->left, rightNode->right) && isSymmetricHelper(leftNode->right, rightNode->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isSymmetricHelper(root->left, root->right);
    }
};
