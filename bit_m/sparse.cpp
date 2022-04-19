class Solution
{
    public:
    bool isSparse(int n)
    {
        int x=0;
        while(n>0)
        {
            if(x==1 && n%2!=0)
                return 0;
            else if(n%2!=0)
                x=1;
            else if(n%2==0)
                x=0;
            n/=2;
        }
        return 1;
    }
};
