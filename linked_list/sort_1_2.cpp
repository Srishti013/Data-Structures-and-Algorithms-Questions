class Solution
{
    public:
    Node* segregate(Node *head) {
        Node *one=new Node(0),*zero=new Node(0),*two=new Node(0);
        Node *h_one=one,*h_two=two,*h_zero=zero;
        Node *curr=head;
        
        while(curr!=NULL)
        {
            if(curr->data==0)
            {
                zero->next=curr;
                
                zero=curr;
            }
            else if(curr->data==1)
            {
               one->next=curr;
                one=curr;
            }
            else
            {
                two->next=curr;
                two=curr;
            }
           curr=curr->next;
        }
        if(h_one->next!=NULL)
        {
        zero->next=h_one->next;
        one->next=h_two->next;
        two->next=NULL;
            
        }
        else
        {
        zero->next=h_two->next;
        two->next=NULL;
        }
        
        head=h_zero->next;
        delete h_one;
        delete h_zero;
        delete h_two;
        return head;
        
    }
};
