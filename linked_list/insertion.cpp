class Solution{
  public:
    
    Node *insertAtBegining(Node *head, int x) {
       Node *new_head = new Node(x);
       new_head->next=head;
       return new_head;
    }
    
    
    
    Node *insertAtEnd(Node *head, int x)  {
     Node *tail= new Node(x);
     Node *curr=head;
     if(head==NULL)
     {
         return tail;
     }
     else
     {
         while(curr->next!=NULL)
         {
             curr=curr->next;
         }
         curr->next=tail;
     }
     return head;
    }
};
