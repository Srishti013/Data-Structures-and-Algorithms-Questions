int sumOfElements(Node *head)
{
   Node *curr=head;
    int sum=0;
    while(curr!=NULL)
    {
        sum+=curr->data;
        curr=curr->next;
    }
    return sum;
}
