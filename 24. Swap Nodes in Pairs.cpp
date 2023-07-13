
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

    ListNode* swapPairs(ListNode* head) {
        vector<int > vt;
        ListNode* root = new ListNode();
        root =head;
        if(head==NULL)return head;
        while(head!=NULL){
            if(head->next==NULL)break;
            swap(head->val, head->next->val);
            head= head->next->next;
        }
        return root;
    }
};
