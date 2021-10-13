class Solution
{
    public:
    
    int getCount(struct Node* head){
    
        int count=0;
        struct Node *curr=head;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        return count;
    
    }
};
