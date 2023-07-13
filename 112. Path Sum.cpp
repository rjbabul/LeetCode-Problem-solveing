
class Solution {
public:
    bool flag= false;
    void helper(TreeNode *root, int sum,int tsum)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(sum==tsum) flag=true;

            return ;
        }
        if(root->left) helper(root->left, sum+ root->left->val, tsum);
        if(root->right) helper(root->right, sum+ root->right->val, tsum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        flag= false;
        if(root==NULL ) return false;
        helper(root, root->val, targetSum);

        return flag;
    }
};
