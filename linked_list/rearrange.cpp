class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       if(head==NULL || head->next==NULL || head->next->next==NULL)
       return;
       
       Node *e_head=head->next;
       Node *o_curr=head,*e_curr=e_head;
       while(e_curr!=NULL && e_curr->next!=NULL)
       {
           o_curr->next=o_curr->next->next;
           o_curr=o_curr->next;
           e_curr->next=e_curr->next->next;
           e_curr=e_curr->next;
       }
       o_curr->next=e_head;
       
    }
};
