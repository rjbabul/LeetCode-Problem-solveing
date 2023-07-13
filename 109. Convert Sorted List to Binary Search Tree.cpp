
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    TreeNode* helper( vector<int> & vt, int l , int r )
    {

        if(l>r) return NULL;

            int mid = (l+r)/2;
            TreeNode* ans  = new TreeNode(vt[mid]);cout<<ans->val<<" ";
            ans->left = helper( vt, l, mid-1);
            ans->right= helper( vt, mid+1, r);

        return ans ;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int > vt;
        TreeNode * ans =NULL;
        if(head==NULL)return ans;

        while(head)
        {
            vt.push_back(head->val);
            head= head->next;
        }

         return helper( vt, 0, vt.size()-1);


    }
};
