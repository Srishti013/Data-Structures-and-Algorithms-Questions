class Solution
{
    public:
   
    bool checkKthBit(int n, int k)
    {
        return (1 & (n>>k));
    }
};
