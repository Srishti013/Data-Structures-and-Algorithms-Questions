class Solution
{
    public:
    
    bool detectLoop(Node* head)
    {
       Node *fast=head,*slow=head;
       while(fast!=NULL && fast->next!=NULL)
       {
           slow=slow->next;
           fast=fast->next->next;
           if(fast==slow)
           return true;
       }
       return false;
    }
};
