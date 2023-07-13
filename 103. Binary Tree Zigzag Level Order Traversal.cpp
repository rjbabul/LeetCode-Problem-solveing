
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL) return {};
        queue<TreeNode *>  q;
        vector< vector< int > > st;
        int level=0;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            vector<int > vt;
            for(int i=0;i<n;i++){
                TreeNode* newnode = q.front();
                vt.push_back(newnode->val);
                q.pop();
                if(newnode->left!= NULL) q.push(newnode->left);
                if(newnode->right!= NULL) q.push(newnode->right);
            }
            st.push_back(vt);
        }

        for(int i=0;i<st.size();i++){
            if(i%2==1){
                reverse(st[i].begin(), st[i].end());
            }
        }
        return st;

    }
};
