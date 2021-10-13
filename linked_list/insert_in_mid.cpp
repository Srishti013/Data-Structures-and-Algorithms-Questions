Node* insertInMiddle(Node* head, int x)
{
   Node *new_node=new Node(x); 
    if(head==NULL)
    {
      head = new_node;
       return head;      
    }
    
    int count=0;
    Node *curr=head;
    while(curr!=NULL)
    {
        curr=curr->next;
        count++;
    }
    if(count%2==0)
    {
        count=count/2;
    }
    else
    count=(count+1)/2;
    curr=head;
    while(count-- > 1)
    {
        curr=curr->next;
    }
    new_node->next=curr->next;
    curr->next=new_node;
    return head;
    
}
