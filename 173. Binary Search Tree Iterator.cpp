
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
class BSTIterator
{
public:

    TreeNode * root =NULL;
    BSTIterator(TreeNode* root)
    {
        this->root= root;
    }

    int next()
    {
        int n=-1;

        while(n==-1)
        {
            TreeNode * temp= root;
            TreeNode* nexttemp= root;

            if(root->left==NULL)
            {
                n=root->val;
                root= root->right;
            }
            while(temp->left)
                temp= temp->left;
            if(nexttemp->left)
                while(nexttemp->left->left!=NULL)
                    nexttemp= nexttemp->left;
            if(temp!=nexttemp)
            {
                n = temp->val;
                nexttemp->left=temp->right;

            }

        }

        return n;
    }

    bool hasNext()
    {
        if(root== NULL)
            return false;
        return  true;
    }
};


