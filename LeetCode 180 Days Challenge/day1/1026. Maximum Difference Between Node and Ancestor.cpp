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
private:
  // return |max - min| of the tree w/ root
  int maxAncestorDiff(TreeNode* root, int mini, int maxi) {
    if (!root)
      return 0;

    mini = min(mini, root->val);
    maxi = max(maxi, root->val);
    int l = maxAncestorDiff(root->left, mini, maxi);
    int r = maxAncestorDiff(root->right, mini, maxi);

    return max({maxi - mini, l, r});
  }
 public:
  int maxAncestorDiff(TreeNode* root) {
    return maxAncestorDiff(root, root->val, root->val);
  }

 
};