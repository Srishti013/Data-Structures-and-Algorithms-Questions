class Solution{
  public:
    
    Node *sortedInsert(struct Node* head, int data) {
        Node *new_node=new Node(data);
        Node *curr=head;
        if(head->data > data)
        {
            new_node->next=head;
            return new_node;
        }
        while(curr->next!=NULL)
        {
            if(curr->next->data>data)
            {
                new_node->next=curr->next;
                curr->next=new_node;
                return head;
            }
            curr=curr->next;
        }
        curr->next=new_node;
        return head;
        
    }
};
