class Solution
{
    public:
    struct Node* reverseList(struct Node *head)
    {
        Node *prev=NULL, *curr=head;
        while(curr!=NULL)
        {
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
};
