/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return NULL;
        Node*ptr=head;
       while(ptr!=NULL)
       {
           Node* node1=new Node(ptr->val);
           node1->next=ptr->next;
           ptr->next=node1;
           node1->random=NULL;
           ptr=ptr->next->next;
       }
        ptr=head;
        while(ptr!=NULL)
        {   if(ptr->random==NULL)
            ptr->next->random=NULL;
         else
         ptr->next->random=ptr->random->next;
            ptr=ptr->next->next;
        }
        ptr=head;
       head=ptr->next;
       Node*ptr2=ptr;
        Node*front=ptr;
        ptr=ptr->next;
        while(ptr!=NULL)
        {
           ptr2=ptr2->next->next;
            front->next=ptr2;
            front=front->next;
            if(ptr2==NULL)
                ptr->next=NULL;
            else
            ptr->next=ptr2->next;
            ptr=ptr->next;
        }
        return head;
    }
};
