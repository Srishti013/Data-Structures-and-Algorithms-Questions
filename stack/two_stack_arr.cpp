void twoStacks :: push1(int x)
{
    if(top1+1<top2)
    {
        arr[top1+1]=x;
        top1++;
    }
    else
    return;
}
   
void twoStacks ::push2(int x)
{
     if(top2-1>top1)
     {
         arr[top2-1]=x;
         top2--;
     }
     else
     return;
}
   
int twoStacks ::pop1()
{
       if(top1>-1)
       {
           int temp=arr[top1];
           top1--;
           return temp;
       }
       else
       return -1;
}

int twoStacks :: pop2()
{
    if(top2<size)
    {
        int temp=arr[top2];
        top2++;
        return temp;
    }
    else
    return -1;
}
