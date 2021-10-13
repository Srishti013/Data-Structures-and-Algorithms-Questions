Node * insertInSorted(Node * head, int data)
{
    Node *curr=head;
    Node *new_node=new Node(data);
    if(head->data > data)
    {
        new_node->next=head;
        return new_node;
    }
    while(curr->next!=NULL && (curr->next->data)<=data)
    {
        curr=curr->next;
    }
    if(curr->next==NULL)
    {
        curr->next=new_node;
    }
    else
    {
        new_node->next=curr->next;
        curr->next=new_node;
    }
    return head;
    
}
