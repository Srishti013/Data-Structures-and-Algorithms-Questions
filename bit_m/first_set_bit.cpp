class Solution
{
    public:
    
    unsigned int getFirstSetBit(int n)
    {
        int res=0;
        while(n>0)
        {
            res++;
            if(n%2!=0)
                break;
            n/=2;
        }
        return res;
    }
};
