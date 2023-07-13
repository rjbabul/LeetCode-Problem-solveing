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
    void push(ListNode*head, int n){
        ListNode*root ;
        root= head;
        ListNode* newNode;
        newNode= new ListNode();\
        newNode->val = n;
        newNode->next= NULL;
        if(root==NULL){
            root= newNode;
            return ;
        }
        while(root->next!= NULL) root= root->next;
        root->next= newNode;

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* root;
        vector<int > vt;
        for(int i=0;i<lists.size();i++){
            root= lists[i];
            while(root!=NULL){

                vt.push_back(root->val);
                root= root->next;
            }
        }
        ListNode* head;
        head=new ListNode();
        sort(vt.begin(), vt.end());

        for(int i=0;i<vt.size();i++){
            push(head, vt[i]);
        }
        head=head->next;
        return head;
    }
};
