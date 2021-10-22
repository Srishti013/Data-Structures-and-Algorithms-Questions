vector <int> preorder(Node* root)
{
   vector<int> a;
   stack<Node*> s;
   Node *curr=root;
   while(s.empty()==false || curr!=NULL)
   {
       while(curr!=NULL)
       {
           a.push_back(curr->data);
           if(curr->right!=NULL)
           s.push(curr->right);
           curr=curr->left;
       }
       if(s.empty()==false)
       {
           curr=s.top();
           s.pop();
       }
   }
   return a;
}
