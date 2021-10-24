class Solution{
    public:
 
    bool isSum(Node *root)
    {
        int sum=0;
        if(root==NULL)
        return true;
        
        if(root->left==NULL && root->right==NULL)
        return true;
        
        if(root->left==NULL && root->right!=NULL)
        sum=root->right->data;
        else if(root->left!=NULL && root->right==NULL)
        sum=root->left->data;
        else
        sum=root->left->data + root->right->data;
        
        if (sum==root->data && isSum(root->left) && isSum(root->right))
        return true;
        else
        return false;
    }
    int isSumProperty(Node *root)
    {
       int i;
       if(isSum(root))
       i=1 ;
       else
       i=0;
       return i;
    }
};
