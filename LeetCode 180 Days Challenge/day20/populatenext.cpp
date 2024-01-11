class Solution {
public:
    void nextlink(Node* r)
    { Node * itr=r;
        while(itr!=NULL)
        {
           itr->left->next=itr->right;
            if(itr->next!=NULL)
                itr->right->next=itr->next->left;
            itr=itr->next;
        }
    }
    Node* connect(Node* root) {
       Node* r=root;
        while(r!=NULL&&r->left!=NULL)
        {
            nextlink(r);
            r=r->left;
        }
        return root;
    }
};
