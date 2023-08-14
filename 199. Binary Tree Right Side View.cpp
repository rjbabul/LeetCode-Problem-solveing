
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>vt;

         if(root==NULL)
              return vt;
        queue<TreeNode*> q;
           q.push(root);
        while(!q.empty())
        {
            vector<int> ans ;

            int size = q.size();
            while(size--)
            {
                TreeNode * temp = q.front();
                q.pop();

                ans.push_back(temp->val);

                if(temp->left)
                   q.push(temp->left);
                if(temp->right)
                   q.push(temp->right);

            }
            reverse(ans.begin(), ans.end());
            vt.push_back(ans[0]);
        }

        return vt;
    }
};
