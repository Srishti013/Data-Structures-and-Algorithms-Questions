void insertAtPosition(Node *head, int pos, int data)
{
    Node *curr=head;
    Node *new_node=new Node(data);
    int count=0;
    while(curr!=NULL)
    {
        curr=curr->next;
        count++;
    }
    curr=head;
    if(pos>count)
    {
        return;
    }
    else if(pos==count)
    {
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=new_node;
    }
    else if(pos==0)
    {
        new_node->next=head;
        return;
    }
    else
    {
        count=0;
        while(count<pos-1)
        {
            count++;
            curr=curr->next;
        }
        new_node->next=curr->next;
        curr->next=new_node;
        
    }
    return;
}
