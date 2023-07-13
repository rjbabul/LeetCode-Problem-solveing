
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
    ListNode* push(ListNode*temp, ListNode* head){
        if(head==NULL) return temp;

        ListNode* newnode= new ListNode();
        newnode->next= NULL;
        newnode->val= head->val;

        if(temp==NULL) {
            temp= newnode;
            temp->next=NULL;
        }
        else{
            newnode->next = temp;
            temp= newnode;
        }
        return temp;
    }
public:
    ListNode* reverseList(ListNode* head) {
         ListNode *temp =NULL;
         temp = new ListNode();
         temp = NULL;
         while(head!=NULL){
             temp= push(temp, head);
             head= head->next;
         }

        return temp;
    }
};
