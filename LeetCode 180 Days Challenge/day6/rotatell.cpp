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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode*ptr=head,*ptr2=head;
        int count=0;
        
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        if(count==0)
            return head;
        k=k%count;
        if(k==0)
            return head;
        ptr=head;
        int y=count-k-1;
        while(y--)
        {
            ptr=ptr->next;
        }
        ptr2=ptr->next;
        ptr->next=NULL;
       ptr=ptr2;
        while(ptr2->next!=NULL)
        {
            ptr2=ptr2->next;
        }
        ptr2->next=head;
        return ptr;
        
    }
};
