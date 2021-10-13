Node * deleteHead(Node *head)
{
    if(head->next==NULL || head==NULL)
    return NULL;
    else
    {
        Node *to_del=head;
        head=head->next;
        delete to_del;
        return head;
    }
}
