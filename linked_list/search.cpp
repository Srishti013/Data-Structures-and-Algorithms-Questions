bool searchLinkedList(Node *head, int x)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data==x)
        {
            return 1;
        }
        curr=curr->next;
    }
    return 0;
}
