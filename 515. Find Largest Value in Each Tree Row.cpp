
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
    vector<int> largestValues(TreeNode* root) {

       vector<int > vt;
       queue<TreeNode*> q;
       if(root==NULL)
           return vt;

        q.push(root);

        while(!q.empty())
        {
            int mx =INT_MIN ;
            int size= q.size();
            while(size--)
            {
                TreeNode* temp = q.front();
                q.pop();

                mx= max(mx, temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            vt.push_back(mx);
        }
        return vt;

    }
};
