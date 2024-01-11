void inorder(TreeNode* root, vector<int>&v){
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
   
    
int Solution::t2Sum(TreeNode* root, int b) {
     TreeNode* r=root;
        int count=0;
        vector<int>v;
        inorder(root,v);
        int j=v.size()-1;
        int i=0;
            while(i<j)
            {
                if((v[i]+v[j])<b)
                i++;
                else if((v[i]+v[j])>b)
                j--;
                else
                return 1;
                
            }
            return 0;
}

