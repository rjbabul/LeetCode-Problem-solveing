
class Solution {
public:


    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int > vt;
        ListNode * temp = head;
        while(temp)
        {
            vt.push_back(temp->val);
            temp= temp->next;
        }
        while(left<right)
        {
            swap(vt[left-1], vt[right-1]);
            left++;
            right--;
        }

       temp= head;
       for(auto x: vt)
       {
           temp->val = x;
           temp= temp->next;
       }

       return head;
    }
};
