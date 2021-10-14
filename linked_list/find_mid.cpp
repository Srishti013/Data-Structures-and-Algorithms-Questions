class Solution{
    public:
    int getMiddle(Node *head)
    {
        if(head==NULL)
        return NULL;
        Node *curr=head;
        Node *curr2=head;
        while(curr2!=NULL && curr2->next!=NULL)
        {
            curr=curr->next;
            curr2=curr2->next->next;
        }
        return curr->data;
    }
};
