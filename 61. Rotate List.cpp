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

    int getsize(ListNode * head)
    {
        int cnt =0;
        ListNode * temp = head;

        while(temp!=NULL)
        {
            cnt++;
            temp= temp->next;
        }
        return cnt ;

    }
    ListNode* rotateRight(ListNode* head, int k) {
        int n = getsize(head);
        if(head==NULL) return head;
          k= k%n;
        if(k==0) return head;
        int pos = n-k;
        ListNode* newnode= head;


        for(int i=1;i<pos;i++)
        {
            head=head->next;
        }

        ListNode* temp = head;
        ListNode * ans= head;
        ans= ans->next;


        while(temp->next!=NULL)
           {
                temp= temp->next;

            }
        temp->next= newnode;
        head->next = NULL;
    return ans;
    }
};
