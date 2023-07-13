
class Solution {
public:

    TreeNode * helper(vector<int> & preorder, vector<int>& inorder, int& index, int left, int right)
    {
        int pivot = left;
        if(left>right) return NULL;
        while(preorder[index]!= inorder[pivot]) pivot++;
        index++;

        TreeNode * newnode= new TreeNode(inorder[pivot]);

        newnode->left= helper(preorder, inorder, index, left, pivot-1);
        newnode->right= helper(preorder, inorder, index, pivot+1, right);

        return newnode;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int n = preorder.size()-1;
        int index=0;

        return helper(preorder, inorder, index, 0, n );
    }
};
