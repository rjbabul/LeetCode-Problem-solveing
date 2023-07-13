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
    bool rev(vector<int> vt)
    {
        int l=0, r= vt.size()-1;
        while(l<r)
        {
            if(vt[l]!=vt[r])return false;
            l++,r--;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {

        queue<TreeNode*>q ;
        int cnt=-1;
        q.push(root);
        vector< int > vt;
        while(!q.empty())
        {
            TreeNode* temp;
            int n= q.size();


            TreeNode* newnode= new TreeNode();
            newnode->val=-101;
            newnode->left=NULL;
            newnode->right= NULL;
           int cnt=0;
            for(int i=0 ; i< n; i++)
            {
                temp= q.front();
                q.pop();
                if(temp==NULL) continue;
                vt.push_back(temp->val);

                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL && temp->left==NULL) q.push(newnode);

                if(temp->right!=NULL) q.push(temp->right);
                if(temp->left!=NULL && temp->right==NULL)q.push(newnode);
                if(temp->left==NULL && temp->right==NULL)
                {
                     q.push(newnode);
                     q.push(newnode);
                }
            }
            if(!rev(vt))return false;
            for(int i=0;i<vt.size();i++)if(vt[i]==-101)cnt++;
            vt.clear();
            if(cnt==n)break;

        }
        if(!rev(vt))return false;
        return true;
    }
};
