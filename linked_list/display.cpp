vector<int> displayList(Node *head)
{
   Node *curr=head;
   vector<int> v;
   while(curr!=NULL)
   {
       v.push_back(curr->data);
       curr=curr->next;
   }
   return v;
}
