vector<int> Kdistance(struct Node *root, int k)
{
    vector<int> a;
    queue<Node*> q;
    q.push(root);
    int c=0;
    while(q.empty()==false)
    {
          
          int s=q.size();
          if(c==k)
          {
              while(q.empty()==false)
              {
                Node* curr=q.front();
                q.pop();
                a.push_back(curr->data);
              }
              break;
              
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
          c++;
    }
    return a;
}
