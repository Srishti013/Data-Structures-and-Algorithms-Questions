class Solution
{
    public:
   
    struct Node* reverse(struct Node* head)
    {
        if(head==NULL)
        return NULL;
        
        Node* prev=NULL;
        Node* curr=head;
        
        while(curr!=NULL)
        {
            Node* n=curr->next;
            curr->next=prev;
            prev=curr;
            curr=n;
        }
        head=prev;
        return head;
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        first = reverse(first);
        second=reverse(second);
        Node* result=NULL;
        int carry=0;
        while(first!=NULL || second!=NULL || carry!=0)
        {
            int value=carry;
            if(first)
            value+=first->data;
            
            if(second)
            value+=second->data;
            
            carry=value/10;
            value=value%10;
            
            Node* n=new Node(value);
            n->next=result;
            result=n;
            if(first)
            first=first->next;
            if(second)
            second=second->next;
        }
        
        return result;
    }
};
