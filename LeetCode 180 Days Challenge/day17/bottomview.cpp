
vector<int> bottomView(struct Node *root)
{   queue<pair<Node*,int>>q;
    map<int,int>m;
    vector<int>vec;
   int hd=0,k=0;
   if(root)
   q.push({root,0});
    while(q.size())
    {
        k=q.front().second;
    
        m[k]=root->data;
        if(root->left)
        {
            hd=k-1;
            q.push({root->left,hd});
        }
        if(root->right)
        {
            hd=k+1;
            q.push({root->right,hd});
        }
        q.pop();
        root=q.front().first;
      
    }
   map<int,int>::iterator itr;
    
   for(itr=m.begin();itr!=m.end();itr++)
   {
       vec.push_back(itr->second);
   }
    
    return vec;
    
}
