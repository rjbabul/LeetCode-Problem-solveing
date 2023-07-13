
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

    ListNode* oddEvenList(ListNode* head) {
         queue<int>odd,even;
         ListNode* temp= head;
         while(temp!=NULL){
             odd.push(temp->val);
             temp=temp->next;
             if(temp!=NULL) {
                 even.push(temp->val);
                 temp=temp->next;
             }
         }
        temp= head;
        while(temp!=NULL){
            if(!odd.empty()){
                temp->val=odd.front();
                odd.pop();
            }
            else if(!even.empty()){
                temp->val= even.front();
                even.pop();
            }
            temp= temp->next;
        }

        return head;
    }
};
