

class Solution {
public:

    void helper(vector<int> &vt, TreeNode * root)
    {
        if(root==NULL) return ;
        if(root->left) helper(vt, root->left);
        if(root->right) helper(vt, root->right);
        vt.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int > vt;
        helper(vt, root);
        return vt;
    }
};
