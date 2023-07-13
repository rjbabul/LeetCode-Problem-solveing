
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

    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int> > st;
        if(root==NULL)return st;
        vector<int> vt;
        queue< TreeNode* >q;
        TreeNode* temp;
        q.push(root);
        vt.push_back(root->val);
        st.push_back(vt);
        while(!q.empty()){
            int n= q.size();
            vt.clear();
            for(int i=1;i<=n;i++){
                temp= q.front();
                q.pop();
                if(temp->left!= NULL){
                    vt.push_back(temp->left->val);
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    vt.push_back(temp->right->val);
                    q.push(temp->right);
                }
            }
            if(vt.size()>0)
            st.push_back(vt);
        }
        return st;

    }
};
