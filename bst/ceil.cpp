int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int c=0;
    Node* curr=root;
    while(curr!=NULL)
    {
        if(curr->data==input)
        return input;
        if(curr->data>input)
        {
            c=curr->data;
            curr=curr->left;
        }
        else
        {
            curr=curr->right;
        }
    }
    if(c==0)
    return -1;
    else
    return c;
}
