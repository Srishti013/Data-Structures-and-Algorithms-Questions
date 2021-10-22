void postorder(Node* root,vector<int> &a)
{
    if(root==NULL)
    return;
    postorder(root->left,a);
    postorder(root->right,a);
    a.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
    vector<int> a;
    postorder(root,a);
    return a;
    
}
