
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * index=head;
        ListNode* traval = head;
       if(head==NULL) return head;
        while(traval->next)
        {
            if(traval->val!= traval->next->val)
            {
                index->next= traval->next;
                index= index->next;
            }
            traval= traval->next;
        }
        index->next=NULL;

        return head;
    }
};
