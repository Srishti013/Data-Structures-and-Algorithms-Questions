int getNthFromLast(Node *head, int n)
{
     Node *curr=head,*n_curr=head;
    while(n_curr!=NULL && n>0)
    {
        n_curr=n_curr->next;
        n--;
    }
    if(n_curr==NULL && n>0)
    return -1;
    while(n_curr!=NULL)
    {
        curr=curr->next;
        n_curr=n_curr->next;
    }
    return curr->data;
}
