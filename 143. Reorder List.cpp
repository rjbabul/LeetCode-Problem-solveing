
class Solution {
public:
   int size(ListNode * head)
   {
       ListNode* temp=head;
       int cnt=0;
       while(temp)
       {
           cnt++;
           temp= temp->next;
       }
       return cnt;
   }

    void reorderList(ListNode* head) {
        int n ;
        n = size(head);

        vector<int >vt;
        ListNode* temp= head;

        while(temp)
        {
            vt.push_back(temp->val);
            temp=temp->next;
        }

        int mid= (n+1)/2;
        n--;
        ListNode* temps=head;
        for(int i =0;i<mid;i++)
        {
            temps->val= vt[i];
            temps=temps->next;

            if(temps)
            {
                temps->val= vt[n];
                temps=temps->next;

                n--;
            }
        }
    }
};
