bool isSorted(Node * head)
{
    Node *curr=head;
    if(head==NULL || head->next==NULL || head->next->next==NULL)
    {
        return true;
    }
    else
    {
        int i=-1;
        int x=curr->data;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            if(x<curr->data)
            {
                if(i==-1)
                i=1;
                else if(i==0)
                return false;
            }
            else if(x>curr->data)
            {
                if(i==-1)
                i=0;
                else if(i==1)
                return false;
            }
            x=curr->data;
        }
        return true;
    
    }
}
