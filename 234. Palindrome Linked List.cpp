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
    ListNode* push(ListNode*rev, ListNode*head)
    {
        ListNode* newnode= new ListNode();
        newnode->val= head->val;
        newnode->next= NULL;
        if(rev==NULL)
        {
            return newnode;
        }
        newnode->next= rev;

        return newnode;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp= head;
        ListNode* rev= new ListNode();
        rev= rev->next;
        while(temp!=NULL)
        {
            rev= push(rev,temp);
            temp= temp->next;
        }
        while(rev!=NULL)
        {
            if(rev->val!=head->val)
            {
                return false;
            }
            rev= rev->next;
            head= head->next;
        }
        return true;
    }
};
