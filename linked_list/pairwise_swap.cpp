class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if (head == NULL || head->next == NULL)
        return head;
        
        Node *curr=head->next,*prev=head;
        head=curr;
        while(true)
        {
           Node *next=curr->next;
           curr->next=prev;
           if(next==NULL || next->next==NULL)
           {
               prev->next=next;
               break;
           }
           prev->next=next->next;
           curr=prev->next;
           prev=next;
           
        }
        return head;
        
    }
};
