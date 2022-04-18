class Solution
{
public:
    int findPosition(int N) {
        if(N==0)
        return -1;
        int n=N,res=0;
        while(n>0)
        {
            res++;
            if(res>1)
                return -1;
            n = n & (n-1);
        }
        res=0;
        while(N>0)
        {
            res++;
            if(N%2!=0)
                return res;
            N/=2;
        }
    }
};
