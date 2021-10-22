int floor(Node* root, int key) {
   int fl=0;
   Node* curr=root;
   while(curr!=NULL)
   {
       if(curr->data==key)
       return key;
       if(curr->data<key)
       {
           fl=curr->data;
           curr=curr->right;
       }
       else if(curr->data>key)
       {
           curr=curr->left;
       }
   }
   if(fl==0)
   return -1;
   else
   return fl;
}
