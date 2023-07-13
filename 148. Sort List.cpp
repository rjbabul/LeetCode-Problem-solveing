
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


    ListNode* sortList(ListNode* head) {
        if(head==NULL) return {};

        ListNode*temp = head;

        vector<int> vt;

        while(temp!=NULL){
              vt.push_back(temp->val);
              temp= temp->next;
        }
        sort(vt.begin(), vt.end());
        ListNode* leap = head;

        for(int i=0;i<vt.size();i++){
            leap->val= vt[i];
            leap= leap->next;
        }

        return head;

    }
};
