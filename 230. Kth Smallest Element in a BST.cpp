
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

    void call( TreeNode* root, vector<int> & vt){

        if(root == NULL) return;
        vt.push_back(root->val);
        call(root->left, vt);
        call(root->right, vt);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> vt;
        call(root, vt);

        sort(vt.begin(), vt.end());
        return vt[k-1];
    }
};
