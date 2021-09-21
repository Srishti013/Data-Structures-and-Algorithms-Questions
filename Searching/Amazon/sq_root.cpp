long long int floorSqrt(long long int x) 
{
    int strt=1,end=x,mid,ans=-1;
    while(strt<=end)
    {
        mid=(strt+end)/2;
        if((mid*mid)==x)
        return mid;
        else if(mid<=x/mid)
        {
           strt=mid+1;
           ans=mid;
        }
        else
        end=mid-1;
    }
    return ans;
}
