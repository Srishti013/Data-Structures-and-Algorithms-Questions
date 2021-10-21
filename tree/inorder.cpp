class Solution {
  public:
    
    void inorder(Node *root,vector<int> &a)
    {
        if(root==NULL)
        return;
        inorder(root->left,a);
        a.push_back(root->data);
        inorder(root->right,a);
    }
    vector<int> inOrder(Node* root) {
       vector<int> a;
       inorder(root,a);
       return a;
    }
};
