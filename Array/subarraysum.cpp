Class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        long long int sum=0;
        vector<int> ans;
        int strt=0,end=0;
        while(end<=n)
        {
            if(sum==s)
            {
                ans.push_back(strt+1);
                ans.push_back(end);
                return ans;
            }
            if(sum<s)
            {
                sum+=arr[end];
                end++;
            }
            else
            {
                sum-=arr[strt];
                strt++;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
