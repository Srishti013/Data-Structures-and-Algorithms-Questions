class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        int count=0,x=0;
        while(N>0)
        {
            if(N%2!=0)
                x++;
            else if(N%2==0)
                x=0;
            N/=2;
            count=max(x,count);
        }
        return count;
    }
};
