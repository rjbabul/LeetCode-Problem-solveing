
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
    int mn ;
    int min(int a, int b)
    {
        return a>b?b:a;
    }
    int  helper(TreeNode* root, int cnt )
    {
        if(root==NULL) return INT_MAX;
        if(root->left == NULL && root->right==NULL)return cnt;

        return min(helper(root->left, cnt+1), helper(root->right, cnt+1));
    }
    int minDepth(TreeNode* root) {

        if(!root) return 0;
       return helper(root, 1);

    }


};
