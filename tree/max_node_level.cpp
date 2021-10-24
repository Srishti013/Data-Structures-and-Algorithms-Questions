int maxNodeLevel(Node *root)
{
    if(root==NULL)
    return 0;
   queue<Node*> q;
   q.push(root);
   int max_s=0,l=0,max_l=0;
   while( q.empty()==false)
   {
       
       int s=q.size();
       if(s>max_s)
       {
           max_s=s;
           max_l=l;
       }
       
       while(s--)
       {
           Node* curr=q.front();
           q.pop();
           if(curr->left!=NULL)
           q.push(curr->left);
           if(curr->right!=NULL)
           q.push(curr->right);
       }
       l++;
   }
   return max_l;
}
