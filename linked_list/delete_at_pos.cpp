Node * deleteAtPosition(Node *head,int pos)
{
    int count=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        curr=curr->next;
        count++;
    }
    curr=head;
    if(pos>count)
    return head;
    else if(pos==count)
    {
        count=1;
        while(count<pos-1)
        {
            curr=curr->next;
            count++;
        }
        Node *to_del=curr->next;
        curr->next=NULL;
        delete to_del;
    }
    else if(pos==1)
    {
        Node *to_del=head;
        head=head->next;
        delete to_del;
    }
    else
    {
        count=1;
        while(count<pos-1)
        {
            curr=curr->next;
            count++;
        }
        Node *to_del=curr->next;
        curr->next=curr->next->next;
        delete to_del;
    }
    return head;
}
