

class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode * ans = head;
        ListNode* temp = head;

        while(temp)
        {
            ListNode* minIndex= temp;
            ListNode * go = temp;
            ListNode * check = temp;
            while(go)
            {
                if(check->val >= go->val) check = go;

                go= go->next;
            }

            if(check && minIndex->val!= check->val)
            {
                int tempo = check->val;
                check->val= minIndex->val;
                minIndex->val =tempo;
            }
            temp= temp->next;
        }

        return ans ;
    }
};
