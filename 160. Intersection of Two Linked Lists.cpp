
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

         ListNode* list= headB;
        while(headA!= NULL){
            list= headB;
            while(list!= NULL){
                if(headA== list) return headA;
                list= list->next;
            }
            headA= headA->next;
        }
        return headA;
    }
};
