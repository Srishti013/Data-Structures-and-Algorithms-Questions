void MyStack :: push(int x)
{
    if(top+1<1000)
    {
       arr[top+1]=x;
       top=top+1;
    }
    else
    return;
    
}


int MyStack :: pop()
{
     if(top>-1)
     {
         int temp=arr[top];
         top--;
         return temp;
     }
     else
     return -1;
}
