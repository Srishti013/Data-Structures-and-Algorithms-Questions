void sibcheck(Node* root,vector<int> &a)
{
    if (root == NULL)
      return;
 
    if (root->left != NULL && root->right != NULL)
    {
        sibcheck(root->left,a);
        sibcheck(root->right,a);
    }
 
    
    else if (root->right != NULL)
    {
        a.push_back(root->right->data);
        sibcheck(root->right,a);
    }
 
  
    else if (root->left != NULL)
    {
        a.push_back(root->left->data);
        sibcheck(root->left,a);
    }
}


vector<int> noSibling(Node* node)
{
    vector<int> a;
    sibcheck(node,a);
    sort(a.begin(),a.end());
    if(a.size()<=0)
    {
        a.push_back(-1);
        return a;
    }
    return a;
}
