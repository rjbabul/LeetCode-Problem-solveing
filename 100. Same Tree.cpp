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
    bool flag= true;

    void helper(TreeNode* p, TreeNode* q)
    {
        if(p==NULL && q==NULL) return ;
        else if(p==NULL && q!=NULL)
        {flag=false; return ;}

        else if(p!=NULL && q==NULL)
        {flag=false; return ;}
        if(q->val != p->val) flag= false;
        isSameTree(p->left, q->left);
        isSameTree(p->right, q->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        helper(p, q);
        return flag;
    }
};
