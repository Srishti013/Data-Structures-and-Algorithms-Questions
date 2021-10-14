class Solution
{
    public:
    
    Node* rotate(Node* head, int k)
    {
        Node* tail=head;
        while(k-- > 1)
        {
            tail=tail->next;
        }
        if(tail==NULL || tail->next==NULL)
        return head;
        Node *curr=tail->next;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=head;
        head=tail->next;
        tail->next=NULL;
        return head;
    }
};
