int getNthFromLast(Node *head, int n)
{   
    Node *n_node=head;
    Node *curr=head;
    int count=0;
    while( n_node!=NULL)
    {
        n_node=n_node->next;
        count++;
    }
    if(count==n)
    return head->data;
    if(count<n)
    return -1;
    count=0;
    n_node=head;
    while( n_node!=NULL && count<n)
    {
        n_node=n_node->next;
        count++;
    }
    while(n_node!=NULL)
    {
        curr=curr->next;
        n_node=n_node->next;
    }
    return curr->data;
}
