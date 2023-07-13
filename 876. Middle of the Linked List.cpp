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
    ListNode* middleNode(ListNode* head) {
        int n=0;
        ListNode* temp;
        temp=head;
        while(temp!=NULL)
        {
            n++;
            temp= temp->next;
        }
        n=n/2+1;
        for(int i=1;i<n ;i++) head = head->next;
        return head;
    }
};
