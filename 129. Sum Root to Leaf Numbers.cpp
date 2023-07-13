
class Solution {
public:
    int ans ;
   void helper(TreeNode* root, int sum )
    {
        if(root->left==NULL  && root->right==NULL )
        {
            ans+= sum;
            cout<<sum<<" ";
            return ;
        }

        if(root->left)
        helper(root->left, sum*10+root->left->val) ;

        if(root->right)
             helper(root->right, sum*10+root->right->val);
    }
    int sumNumbers(TreeNode* root) {
        ans =0;
        if(root==NULL) return ans;
        helper(root, root->val);

        return ans;
    }
};
