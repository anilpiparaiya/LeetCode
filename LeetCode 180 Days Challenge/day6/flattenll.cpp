Node *flatten(Node *root)
{
  Node* ptr=root,*first=root,*sec=root,*ptr2=root;
  if(root==NULL||root->next==NULL)
  return root;
  Node* dummy=new Node(0);
  dummy->next=NULL;
 dummy->data=0;
 dummy->bottom=NULL;
  ptr2=root->next;
  root->next=NULL;
  sec=ptr2;
   while(ptr2!=NULL)
  { 
  
  first=dummy;
         while(ptr!=NULL&&ptr2!=NULL)
         {
             if(ptr->data<=ptr2->data)
             {
                 first->bottom=ptr;
                 ptr=ptr->bottom;
                 first=first->bottom;
                 
             }else
             {
                 first->bottom=ptr2;
                 ptr2=ptr2->bottom;
                 first=first->bottom;
             }
         }
         while(ptr!=NULL)
         {first->bottom=ptr;
                 ptr=ptr->bottom;
                 first=first->bottom;
             
         }
         while(ptr2!=NULL)
         {
             first->bottom=ptr2;
                 ptr2=ptr2->bottom;
                 first=first->bottom;
         }
        ptr2=sec->next;
        if(ptr2==NULL)
        return dummy->bottom;
        
        sec=ptr2;
        
        ptr=dummy->bottom;
  }
  return dummy->bottom;
}
