int height(Node* root) {
        // Write your code here.
        vector<Node*>vec;
        Node* ptr;
        int size,height=0;
    if(root!=NULL)
    vec.push_back(root);

        do{
        if(root!=NULL)
        {
            if(root->left!=NULL){
                vec.push_back(root->left);
                ptr=root->left;
                root->left=NULL;
                root=ptr;
            }else if(root->right!=NULL){
               
                vec.push_back(root->right);
                ptr=root->right;
                 root->right=NULL;
                root=ptr;
            }else{
                //cout<<"ka";
                if(vec.empty())
                goto r;
               // cout<<"ki";
                size=vec.size();
               // cout<<height<<" ";
                if(size>height)
                height=size;
               // cout<<size<<" "<<height;
                vec.pop_back();
                if(!vec.empty())
                root=vec.back();
            }
            }
            
        
        }while(!vec.empty());
        r:
        if(height)
        return height-1;
        else
        return height;
    }
