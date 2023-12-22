/* Should return true if trees with roots as r1 and 
   r2 are identical */
bool isIdentical(Node *r1, Node *r2)
{
    //Your Code here
    Node* root1;
    Node* root2;
    
    queue<Node*>a;
    queue<Node*>b;
if(r1!=NULL&&r2!=NULL)
{
    a.push(r1);
    b.push(r2);
}else if(r1==NULL&&r2==NULL)
return true;
    while(!a.empty())
    {
        root1=a.front();
        root2=b.front();
        if(root1->data!=root2->data)
        return false;
        
        if(root1->left!=NULL&&root2->left!=NULL)
        {
                a.push(root1->left);
                b.push(root2->left);
            
        }else{
            if(!(root1->left==NULL&&root2->left==NULL))
            return false;
            
        }
                if(root1->right!=NULL&&root2->right!=NULL)
            {
                    a.push(root1->right);
                    b.push(root2->right);
                
            }else{
            if(!(root1->right==NULL&&root2->right==NULL))
            return false;
            
        }
        a.pop();
        b.pop();
    }
    return true;
}
