void preorder(struct Node* node, vector<int> &a)
{
    if(node==NULL)
    return ;
    a.push_back(node->data);
    preorder(node->left,a);
    preorder(node->right,a);
}
vector <int> preOrder(struct Node* node) 
{
    vector<int> a;
    preorder(node,a);
    return a;
}
