class Solution{
    public:
    int height(struct Node* node){
    
    if(node==NULL)
        return 0;
    else
        return 1 + max(height(node->left),height(node->right));
    }
};
