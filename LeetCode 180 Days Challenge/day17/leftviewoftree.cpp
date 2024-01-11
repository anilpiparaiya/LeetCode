// A wrapper over leftViewUtil()
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>vec;
   queue<Node*>qu;
   if(root)
   qu.push(root);
 
  while(!qu.empty())
  {
      int n=qu.size();
      for(int i=1;i<=n;i++)
      { Node* temp=qu.front();
          if(i==1)
          vec.push_back(temp->data);
          qu.pop();
          
          if(temp->left!=NULL)
          qu.push(temp->left);
          if(temp->right!=NULL)
          qu.push(temp->right);
          
      }
  }
   return vec;
}
