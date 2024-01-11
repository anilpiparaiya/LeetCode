Node* LCA(Node *root, int n1, int n2)
{
   
   while(root!=NULL)
   {
       if(root->data==n1||root->data==n2)
       return root;
       if(root->data<n1&&root->data>n2)
       return root;
       if(root->data<n2&&root->data>n1)
       return root;
       if(root->data<n1&&root->data<n2)
       root=root->right;
       else
       root=root->left;
   }
   return root;
}
