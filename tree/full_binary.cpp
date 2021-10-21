bool isFullTree (struct Node* root)
{
    if(root==NULL)
    return true;
    if(root->left==NULL && root->right==NULL)
    return true;
    if((root->left==NULL && root->right!= NULL) || ((root->left!=NULL && root->right== NULL)))
    return false;
    return (isFullTree(root->left) && isFullTree(root->right));
}
