Node* deleteMid(Node* head)
{
   if(head==NULL || head->next==NULL )
    return NULL;
   Node *curr=head;
   Node *prev=NULL;
   Node *curr2=head;
   while(curr2!=NULL && curr2->next!=NULL)
   {
       prev=curr;
       curr=curr->next;
       curr2=curr2->next->next;
   }
   prev->next=prev->next->next;
   delete curr;
   return head;
    
}
