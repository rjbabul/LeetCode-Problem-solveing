
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

    vector<TreeNode*> build_Bst(int at, int n)
    {
        vector<TreeNode*> vt;
        if(n < at) return {nullptr};
        for(int i=at;i<=n;i++)
        {
            for(auto left: build_Bst(at, i-1))
            {
                for(auto right:build_Bst(i+1, n))
                    vt.push_back(new TreeNode(i, left, right));
            }
        }
        return vt;
    }
    vector<TreeNode*> generateTrees(int n) {
        return build_Bst(1, n);
    }
};
