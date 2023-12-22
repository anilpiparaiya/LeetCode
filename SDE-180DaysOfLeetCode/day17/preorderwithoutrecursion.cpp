vector <int> preorder(Node* root)
{
  vector<int>vec;
  stack<Node*> st;
  while(root!=NULL||st.empty()==false)
  {
      
      while(root!=NULL)
      {
         vec.push_back(root->data);
      st.push(root); 
      root=root->left;
      }
root=st.top();
st.pop();
root=root->right;
      
  }
  return vec;
}
