
Class Solution{
public:
    int setBits(int N) {
        int res=0;
        while(N>0)
        {
            res++;
            N=N&N-1;
        }
        return res;
    }
};
