class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int x;
        for(int i=0;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        int first_set = x & ~(x-1);
        int m=0,n=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] & first_set)
                m=m^nums[i];
            else
                n=n^nums[i];
        }
        vector<int> ans;
        ans.push_back(m);
        ans.push_back(n);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
