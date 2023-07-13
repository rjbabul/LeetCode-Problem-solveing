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
    void push(ListNode *root, int new_data){
        ListNode *temp;
        ListNode* new_node;
        new_node= new ListNode;
        new_node->next=NULL;
        temp=root;
        new_node->val = new_data;
        if(temp==NULL){
            temp->next = new_node;
            return ;
        }

        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next= new_node;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *root ;

        root = new ListNode;
        int p=0;
        while(l1!=NULL && l2!=NULL ){
             p+= l1->val+ l2->val;
             push(root,p%10);
            p/=10;
            l1=l1->next;
            l2= l2->next;
        }
        while(l1!=NULL   ){
             p+=   l1->val;
             push(root,p%10);
            p/=10;
            l1=l1->next;

        }
        while(  l2!=NULL ){
             p+=  l2->val;
             push(root,p%10);
            p/=10;

            l2= l2->next;
        }

        if(p>0) push(root, p);
        root= root->next;
        return root;


    }
};
