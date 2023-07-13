
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
    int mx;
  void helper(TreeNode*root, int  dept){
          if(root==NULL) return ;

           helper( root->left, dept+1);
          // cout<<root->val<<" "<<dept<<endl;
          mx = max(mx, dept);
           helper(root->right, dept+1);
    }
    int maxDepth(TreeNode* root) {
        int dept=0;
        mx=0;
        if(root==NULL)return 0;
        dept=1;
          helper(root, dept);

        return mx;
    }
};
