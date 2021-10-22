Node* insert(Node* root, int Key) {
    if(root==NULL)
    {
        Node* temp=new Node(Key);
        return temp;
    }
    else if(root->data>Key)
    {
        root->left=insert(root->left,Key);
    }
    else if(root->data<Key)
    {
        root->right=insert(root->right,Key);
    }
    return root;
}
