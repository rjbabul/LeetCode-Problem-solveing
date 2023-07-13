
class Solution {
public:
    ListNode* push(ListNode* head, int data)
    {
        ListNode *newnode =new ListNode();
        newnode->val= data;
        newnode->next=NULL;

        if(head==NULL)return newnode;

        ListNode* temp=head;
        while(temp->next) temp= temp->next;
        temp->next= newnode;

        return head;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * newnode=NULL;
        if(head==NULL) return head;
        ListNode*temp = head;

        while(temp)
        {

            if(temp->next!=NULL && temp->val != temp->next->val)
                 {
                     newnode= push(newnode, temp->val);
                     temp= temp->next;
                 }
                else if(temp->next==NULL)
                {
                    newnode= push(newnode, temp->val);
                    return newnode;
                }
                else
                {
                     int n = temp->val;
                     while(temp && temp->val==n) temp=temp->next;
                }
                if(temp==NULL) return newnode;
        }
        return newnode;
    }
};
