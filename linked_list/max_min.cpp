int maximum(Node *head)
{
    int max=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data>max)
        max=curr->data;
        curr=curr->next;
    }
    if(max==0)
    return -1;
    return max;
}

int minimum(Node *head)
{
    int min=1001;
    Node *curr=head;
    while(curr!=NULL)
    {
        if(curr->data<min)
        min=curr->data;
        curr=curr->next;
    }
    if(min==1001)
    return -1;
    return min;
}
