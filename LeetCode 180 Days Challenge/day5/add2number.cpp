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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1,*ptr2;
        ptr1=l1;
        ptr2=l2;
       ListNode *ptr=NULL;
        int carry=0;
         ListNode * head = new ListNode(0);
       ptr=head;
        while(ptr1!=NULL&&ptr2!=NULL)
        {
           int sum=ptr1->val+ptr2->val + carry;
            carry=(sum/10)?1:0;
          
    ptr->next = new ListNode(sum%10);
             ptr=ptr->next;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
                
        }
        while(ptr1!=NULL)
        {
            int sum=ptr1->val+carry;
            carry=(sum/10)?1:0;
         ptr->next = new ListNode(sum%10);
             ptr=ptr->next;
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL)
        {
            int sum=ptr2->val + carry;
            carry=(sum/10)?1:0;
             ptr->next = new ListNode(sum%10);
             ptr=ptr->next;
            ptr2=ptr2->next;
        }
        if(carry)
        { ptr->next = new ListNode(carry);
             ptr=ptr->next;
        }
        return head->next;
    }
};
