Node* getsuc(Node* root)
{
    Node* temp=root;
    Node* curr=root;
    curr=curr->right;
    while(curr!=NULL)
    {
        temp=curr;
        curr=curr->left;
    }
    return temp;
}

Node *deleteNode(Node *root, int X) {
    if(root==NULL)
    return root;
    if(root->data<X)
    {
        root->right=deleteNode(root->right,X);
    }
    else if(root->data>X)
    {
        root->left=deleteNode(root->left,X);
    }
    else
    {
        if (root->left==NULL and root->right==NULL)
            return NULL;
            
        if(root->left==NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }
           Node* temp=getsuc(root);
            root->data=temp->data;
           root->right = deleteNode(root->right,temp->data);
        
    }
    return root;
}
