int digitalRoot(int n)
{
    int x=0;
    if(n>=0 && n<=9)
    return n;
    
    else
    {
        while(n>0)
        {
            x+=n%10;
            n/=10;
        }
        return digitalRoot(x);
    }
}
