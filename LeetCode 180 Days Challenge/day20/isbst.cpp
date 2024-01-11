class Solution
{
    public:
    bool findbst(Node* r, int mini, int maxi )
    {   if(r==NULL)
        return true ;
        if(r->data<mini||r->data>=maxi)
        {
           return false; 
        }
        
        
        return findbst(r->left,mini,r->data) && findbst(r->right,r->data,maxi);
    }
    bool isBST(Node* root) 
    {
      
       Node* r=root;
    
       
      return findbst(r->left,INT_MIN,r->data)&&findbst(r->right,r->data,INT_MAX);
    }
};
