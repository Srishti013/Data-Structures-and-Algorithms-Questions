class Solution{
    public:
   
    int countBitsFlip(int a, int b){
        int x = a^b;
        int res=0;
        while(x>0)
        {
            res++;
            x=x&(x-1);
        }
        return res;
        
    }
};
