
class Solution {
public:
    bool flag;
    vector<int>vt;
    int helper(TreeNode * root, int dept)
    {
        if(root==NULL) return 0;
       int lft=  helper(root->left, dept);
       int rgt =  helper(root->right, dept);

       if(abs(lft-rgt)>1)return -1;
       if(lft==-1 || rgt==-1) return -1;

       return 1+max(lft, rgt);

    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)  return true;
        flag= false;
        vt.clear();
        return helper(root, 0)!=-1;
    }
};
