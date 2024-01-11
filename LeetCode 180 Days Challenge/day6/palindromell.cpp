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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr=head,*ptr2=head;
        if(head==NULL||head->next==NULL)
            return true;
        int count=0;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
        ptr=head;
        int k=(count+1)/2;
       
        while(k--)
        {
            ptr2=ptr2->next;
        }
       ;
       
        ptr2=reverse(ptr2,count/2);
       while(ptr2->next!=NULL&&ptr->next!=NULL)
       {
           if(ptr->val!=ptr2->val)
               return false;
           ptr=ptr->next;
           ptr2=ptr2->next;
       }
        if(ptr->val!=ptr2->val)
               return false;
        return true;
    }
};
