class Solution
{
    public:
    
    struct Node* reverseList(struct Node *head)
    {
        struct Node* new_head=new Node(head->data);
        struct Node* curr=head;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            struct Node* rev=new Node(curr->data);
            rev->next=new_head;
            new_head=rev;
        }
        return new_head;
    }
    
};
