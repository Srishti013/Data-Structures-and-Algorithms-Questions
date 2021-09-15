int convertFive(int n) {
    
    int x=0,r,c=1;
    while(n>0)
    {
        r=n%10;
        if(r==0)
        {
            x+=5*c;
        }
        else
        {
            x+=r*c;
        }
        c*=10;
        n/=10;
        
    }
    return x;
}
