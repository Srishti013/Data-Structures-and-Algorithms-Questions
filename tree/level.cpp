class Solution{
  public:
    
    int level(struct Node *node, int target,int l)
    {
        if(node==NULL)
    	return 0;
    	
        if(node->data==target)
        return l;
        
        int x = level(node->left,target,l+1);
        
        if(x!=0)
        return x;
        
        x=level(node->right,target,l+1);
        return x;
    }
    int getLevel(struct Node *node, int target)
    {
        return level(node,target,1);
    	
    }
};
