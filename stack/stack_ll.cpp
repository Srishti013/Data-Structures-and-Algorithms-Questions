void MyStack ::push(int x) 
{
    StackNode *n = new StackNode(x);
    n->next=top;
    top=n;
    
}


int MyStack ::pop() 
{
    if(top==NULL)
    return -1;
    int temp = top->data;
    StackNode *x=top;
    top=top->next;
    delete x;
    return temp;
}
