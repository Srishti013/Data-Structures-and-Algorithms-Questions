Node * deleteTail(Node *head)
{
   Node *curr=head;
   if(head->next==NULL)
   {
       return NULL;
   }
   while(curr->next->next!=NULL)
   {
       curr=curr->next;
   }
   Node *to_delete=curr->next;
   curr->next=NULL;
   delete to_delete;
   return head;
}
