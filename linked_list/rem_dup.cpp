Node *removeDuplicates(Node *head)
{
    Node *curr=head;
    while(curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node *to_del=curr->next;
            curr->next=curr->next->next;
            delete to_del;
        }
        else
        curr=curr->next;
    }
    return head;
}
