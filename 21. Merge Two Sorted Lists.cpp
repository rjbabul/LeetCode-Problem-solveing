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
    ListNode* push(ListNode *temp, ListNode * head)
    {
        ListNode * newnode= new ListNode();
        newnode->val= head->val;
        newnode->next= NULL;

        ListNode *root = temp;

        if(root == NULL)
            return newnode;

        while(root->next!= NULL)
        {
            root = root->next;
        }

        root->next= newnode;

        return temp;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp= NULL;
        temp=new ListNode();
        temp= temp->next;
        while(list1!= NULL &&  list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                temp= push(temp, list1);
                list1= list1->next;
            }
            else
            {
                temp= push(temp, list2);
                list2= list2->next;
            }
        }
        while(list1!=NULL)
        {
            temp= push(temp, list1);
            list1= list1->next;
        }
         while(list2!=NULL)
        {
            temp= push(temp, list2);
             list2= list2->next;
        }

        return temp;
    }
};
