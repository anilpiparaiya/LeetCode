/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode*reverse(ListNode* head,int k)
    {       ListNode* ptr=head,*ptr3=NULL,*ptr2=head;
        int i=0;
        while(k--)
        {
            ptr2=ptr->next;
            ptr->next=ptr3;
            ptr3=ptr;
            ptr=ptr2;
            head=ptr3;
        }
     return head;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* ptr=head,*ptr3=NULL,*ptr2=head,*ptr4=head;
        int i=0;
        if(head==NULL||head->next==NULL||k==1)
            return head;
        while(1)
        {
        for(i=0;i<k-1;i++)
        {   if(ptr==NULL||ptr->next==NULL)
        {
            ptr3->next=ptr4;
            return head;
        }else
            ptr=ptr->next;
        }
        ptr2=ptr->next;
        ptr->next=NULL;
        ptr=ptr2;
        
        if(ptr3==NULL)
        {
            head=reverse(ptr4,k);
            ptr3=head;
            for(i=0;i<k-1;i++)
        {
            ptr3=ptr3->next;
        }
        }
        else
        {
            ptr3->next=reverse(ptr4,k);
            for(i=0;i<k;i++)
        {
            ptr3=ptr3->next;
        }
        }
        ptr4=ptr;
        } 
    }
};
