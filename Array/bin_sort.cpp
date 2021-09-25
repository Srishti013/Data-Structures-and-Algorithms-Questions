class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        int c=0;
        for(int i=0;i<binArray.size();i++)
        {
            if(binArray[i]==0)
            {
                int temp=binArray[c];
                binArray[c]=0;
                binArray[i]=temp;
                c++;
            }
        }
        return binArray;
    }
    
};
