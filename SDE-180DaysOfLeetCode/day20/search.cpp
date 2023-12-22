class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* a = root;
        while(a!=NULL)
        {
            if(a->val==val)
                return a;
            else if(a->val>val)
            {
                a=a->left;
            }else
                a=a->right;
        }
        return a;
    }
};
