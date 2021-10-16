class Solution
{
    public:
    Node* addOne(Node *head) 
    {
    
        if(head==NULL)
        {
            Node *temp=new Node(0);
            return temp;
        }
        if(head->next==NULL && head->data!=9)
        {
            head->data=(head->data) + 1;
            return head;
        }
        if(head->next==NULL && head->data==9)
        {
            head->data=0;
            Node *temp=new Node(1);
            temp->next=head;
            return temp;
        }
        Node *prev=NULL,*curr=head;
        while(curr!=NULL)
        {
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            head=prev;
        }
        prev=NULL;
        curr=head;
        while(curr!=NULL)
        {
            if(curr->data==9)
            {
                curr->data=0;
                prev=curr;
                curr=curr->next;
            }
            else
            {
                curr->data=(curr->data)+1;
                break;
            }
        }
        if(curr==NULL)
        {
            Node *n=new Node(1);
            prev->next=n;
        }
        prev=NULL;
        curr=head;
        while(curr!=NULL)
        {
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            head=prev;
        }
    return head;
    }
};
