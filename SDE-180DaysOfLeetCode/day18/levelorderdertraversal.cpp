/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution::levelOrder(TreeNode* a) {
    vector<vector<int>>res;
   queue<TreeNode*> q;
    if(a!=NULL)
       {q.push(a);
       vector<int>vec;
       vec.push_back(a->val);
           res.push_back(vec);
       }else
       return res;
       int count=1;
    while(!q.empty())
    { int k=0;
     vector<int>vec;
        for(int i=0;i<count;i++)
           {    
              
        TreeNode* qu=q.front();
        q.pop();
            if(qu->left!=NULL)
           { vec.push_back(qu->left->val);
               q.push(qu->left);
               k++;
           }
            if(qu->right!=NULL)
            {vec.push_back(qu->right->val);
            k++;
                q.push(qu->right);
            }
            
        }
        if(vec.size())
        res.push_back(vec);
        count=k;
        vec.clear();
    }
    return res;
}
