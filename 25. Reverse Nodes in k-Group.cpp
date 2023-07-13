
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
    ListNode *push( ListNode *head, int data)
    {
        ListNode * newnode= NULL;
        newnode= (struct ListNode*) malloc(sizeof(struct ListNode));
        newnode->val =data;
        newnode->next= NULL;

       ListNode *temps= head;
        if(temps==NULL) return newnode;

        while(temps->next)
            temps= temps->next;
        temps->next= newnode;
        return head;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * ans= NULL;
        vector<int>vt;
        if(k<=1) return head;

        ListNode *temp= head;
        while(temp)
        {
            vt.push_back(temp->val);
            temp= temp->next;
            if(vt.size()==k)
            {
                reverse(vt.begin(), vt.end());
                for( auto x: vt)
                {
                    ans = push(ans, x);
                }
                vt.clear();
            }
        }
        if(vt.size()>0)
        {
             for( auto x : vt)
                {
                    ans = push(ans, x);
                }
        }
      return ans;
    }
};
