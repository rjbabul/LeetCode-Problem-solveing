
class Solution
{
public:

    vector<vector<int> > ans;
    vector<int> vt;

    void helper(TreeNode * root, int sum, int targetSum)
    {
        if(sum == targetSum)
        {
            if(root->left==NULL &&  root->right==NULL)
                ans.push_back(vt);
        }

        if(root->left!=NULL)
        {
            vt.push_back(root->left->val);
            helper(root->left,sum+ root->left->val, targetSum);
            vt.pop_back();
        }
        if(root->right)
        {
            vt.push_back(root->right->val);
            helper(root->right,sum+ root->right->val, targetSum);
            vt.pop_back();
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum)
    {
        ans.clear();
        vt.clear();

        if(root== NULL)
            return ans;

        vt.push_back(root->val);
        helper(root, root->val, targetSum);

        return ans;
    }
};
