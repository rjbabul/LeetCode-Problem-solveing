/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
void helper(vector<int>& vt, Node* root)
{
    if(root==NULL)return ;
    vt.push_back(root->val);
    vector<Node*> v= root->children;
    for(int i=0;i<v.size();i++)
    {
        helper(vt, v[i]);
    }
}

class Solution {
public:
    vector<int> preorder(Node* root) {

       vector<int > vt;
        helper(vt, root);
        return vt;
    }
};
