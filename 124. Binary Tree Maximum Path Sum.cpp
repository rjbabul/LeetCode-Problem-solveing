
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
    void helper(TreeNode*root, int & mx){

        if(root==NULL){
            return ;
        }

        helper(root->left, mx);

        helper(root->right,mx);
        int l=0,r=0;
        if(root->left!=NULL && root->val+ root->left->val> root->val) l= root->left->val;
        if(root->right!=NULL && root->val+ root->right->val> root->val) r= root->right->val;
        mx=max(mx, root->val+l+r);
        root->val+= max(l,r);
        mx=max(mx, root->val);

    }
    int maxPathSum(TreeNode* root) {
        int mx=INT_MIN;

        helper(root, mx);
        return mx;
    }
};
