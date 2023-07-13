
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;

        q.push(root);
        vector<int>vt;
        vector< vector<int > > ans;
        if(root==NULL) return ans;
        while(!q.empty())
        {
            int n= q.size();
            while(n--)
            {
                TreeNode * temp= q.front();
                q.pop();
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                vt.push_back(temp->val);
            }
            ans.push_back(vt);
            vt.clear();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};
