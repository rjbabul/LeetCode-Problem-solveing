
class Solution {
public:
   vector<int> vt;
   void helper(TreeNode* head)
   {
       if(head==NULL) return ;
       vt.push_back(head->val);
       helper(head->left);
       helper(head->right);
   }
    vector<int> preorderTraversal(TreeNode* root) {
        vt.clear();
        helper(root);
        return vt;
    }
};
