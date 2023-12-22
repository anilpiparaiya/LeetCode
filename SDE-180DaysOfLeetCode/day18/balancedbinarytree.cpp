/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isBalanced(TreeNode* a) {
   
   queue<TreeNode*> q;
    if(a!=NULL)
       {q.push(a);
       
       }else
       return 1;
       int count=1;
       int num=1;
    while(!q.empty())
    { int k=0;
    
        for(int i=0;i<count;i++)
           {    
              
        TreeNode* qu=q.front();
        q.pop();
            if(qu->left!=NULL)
           { 
               q.push(qu->left);
               k++;
               
           }else{
               if(qu->right!=NULL&&(qu->right->left!=NULL||qu->right->right!=NULL))
               return 0;
           }
            if(qu->right!=NULL)
            {
            k++;
                q.push(qu->right);
            }else{
                if(qu->left!=NULL&&(qu->left->left!=NULL||qu->left->right!=NULL))
               return 0;
            }
            
        }
        
        count=k;
       
    }
   return 1;
}

