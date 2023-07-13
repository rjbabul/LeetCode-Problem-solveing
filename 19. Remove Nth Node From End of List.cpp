
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
    int call(ListNode*head,int n){
        ListNode* root;
        root=head;
        int nu=0;
        while(root!=NULL){
            nu++;
            root=root->next;
        }
        return nu;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int pos = call(head,n)+1-n;
        int c=1;
        ListNode*root;
        root=head;

        while(c++<pos-1){

            root = root->next;
        }
        if(pos==1){
            head= head->next;
        }
        else if(n==1)root->next=NULL;
        else
        root->next= root->next->next;

        return head;
    }
};
