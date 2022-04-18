class Solution
{
    public:
    
    int posOfRightMostDiffBit(int m, int n)
    {
        int s = m^n,res=0;
        if(m==n)
            return -1;
        while(s>0)
        {
            res++;
            if(s%2!=0)
                break;
            s/=2;
        }
        return res;
    }
};
