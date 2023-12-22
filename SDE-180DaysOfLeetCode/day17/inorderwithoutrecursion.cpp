// Return a vector containing the inorder traversal of the tree
vector<int> inOrder(Node* root)
{
  vector<int>vec;
 stack <Node*>st;

 while(root!=NULL||st.empty()==false)
 {  
     while(root!=NULL)
     {
         st.push(root);
         root=root->left;
     }
     root=st.top();
     vec.push_back(root->data);
     st.pop();
     
     root=root->right;
 }
  return vec;
}
